#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define PLAYER_SIZE 50
#define PLAYER_SPEED 5

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

typedef struct {
    int x, y;
    int w, h;
} Player;

Player player;

bool initializeSDL() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    window = SDL_CreateWindow("Simple SDL2 Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    return true;
}

void closeSDL() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void handleInput(SDL_Event* e, bool* running) {
    while (SDL_PollEvent(e) != 0) {
        if (e->type == SDL_QUIT) {
            *running = false;
        }
    }

    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
    if (currentKeyStates[SDL_SCANCODE_UP]) {
        player.y -= PLAYER_SPEED;
    }
    if (currentKeyStates[SDL_SCANCODE_DOWN]) {
        player.y += PLAYER_SPEED;
    }
    if (currentKeyStates[SDL_SCANCODE_LEFT]) {
        player.x -= PLAYER_SPEED;
    }
    if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
        player.x += PLAYER_SPEED;
    }

    // Keep the player within the screen bounds
    if (player.x < 0) player.x = 0;
    if (player.y < 0) player.y = 0;
    if (player.x + player.w > SCREEN_WIDTH) player.x = SCREEN_WIDTH - player.w;
    if (player.y + player.h > SCREEN_HEIGHT) player.y = SCREEN_HEIGHT - player.h;
}

void render() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect playerRect = { player.x, player.y, player.w, player.h };
    SDL_RenderFillRect(renderer, &playerRect);

    SDL_RenderPresent(renderer);
}

int main(int argc, char* argv[]) {
    if (!initializeSDL()) {
        return -1;
    }

    player.x = (SCREEN_WIDTH - PLAYER_SIZE) / 2;
    player.y = (SCREEN_HEIGHT - PLAYER_SIZE) / 2;
    player.w = PLAYER_SIZE;
    player.h = PLAYER_SIZE;

    bool running = true;
    SDL_Event e;

    while (running) {
        handleInput(&e, &running);
        render();
        SDL_Delay(16); // Roughly 60 FPS
    }

    closeSDL();
    return 0;
}

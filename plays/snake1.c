#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define WIDTH 40
#define HEIGHT 20
#define SNAKE_LENGTH 100

int score = 0;

typedef struct {
    int x, y;
} Position;

typedef struct {
    Position body[SNAKE_LENGTH];
    int length;
    char direction;
} Snake;

typedef struct {
    Position pos;
} Food;

Snake snake;
Food food;

void init_game() {
    // Initialize snake
    snake.length = 1;
    snake.body[0].x = WIDTH / 2;
    snake.body[0].y = HEIGHT / 2;
    snake.direction = 'R'; // Start moving right

    // Initialize food
    food.pos.x = rand() % WIDTH;
    food.pos.y = rand() % HEIGHT;

    // Initialize ncurses
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    timeout(100); // Controls the speed of the game
}

void draw() {
    clear();

    // Draw border
    for (int i = 0; i < WIDTH + 2; i++) {
        mvprintw(0, i, "#");
        mvprintw(HEIGHT + 1, i, "#");
    }
    for (int i = 0; i < HEIGHT + 2; i++) {
        mvprintw(i, 0, "#");
        mvprintw(i, WIDTH + 1, "#");
    }

    // Draw snake
    for (int i = 0; i < snake.length; i++) {
        mvprintw(snake.body[i].y, snake.body[i].x, "O");
    }

    // Draw food
    mvprintw(food.pos.y, food.pos.x, "*");

    // Display score
    mvprintw(HEIGHT + 2, 0, "Score: %d", score);

    refresh();
}

void update() {
    // Move snake body
    for (int i = snake.length - 1; i > 0; i--) {
        snake.body[i] = snake.body[i - 1];
    }

    // Move snake head based on direction
    switch (snake.direction) {
        case 'U':
            snake.body[0].y--;
            break;
        case 'D':
            snake.body[0].y++;
            break;
        case 'L':
            snake.body[0].x--;
            break;
        case 'R':
            snake.body[0].x++;
            break;
    }

    // Check for collision with food
    if (snake.body[0].x == food.pos.x && snake.body[0].y == food.pos.y) {
        snake.length++;
        score += 10;
        food.pos.x = rand() % WIDTH;
        food.pos.y = rand() % HEIGHT;
    }

    // Check for collision with walls or itself
    if (snake.body[0].x < 1 || snake.body[0].x > WIDTH ||
        snake.body[0].y < 1 || snake.body[0].y > HEIGHT) {
        endwin();
        printf("Game Over! Final Score: %d\n", score);
        exit(0);
    }
    for (int i = 1; i < snake.length; i++) {
        if (snake.body[0].x == snake.body[i].x && snake.body[0].y == snake.body[i].y) {
            endwin();
            printf("Game Over! Final Score: %d\n", score);
            exit(0);
        }
    }
}

void input() {
    int key = getch();
    switch (key) {
        case KEY_UP:
            if (snake.direction != 'D') snake.direction = 'U';
            break;
        case KEY_DOWN:
            if (snake.direction != 'U') snake.direction = 'D';
            break;
        case KEY_LEFT:
            if (snake.direction != 'R') snake.direction = 'L';
            break;
        case KEY_RIGHT:
            if (snake.direction != 'L') snake.direction = 'R';
            break;
        case 'q':
            endwin();
            exit(0);
    }
}

int main() {
    srand(time(NULL));
    init_game();

    while (1) {
        draw();
        input();
        update();
        usleep(100000); // Adjust game speed
    }

    endwin();
    return 0;
}

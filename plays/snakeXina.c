#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 50
#define HEIGHT 20

typedef struct {
  int x, y;
} Point;

Point snake[100];
int snake_lenght;
Point food;
int direction;

void init_game()
{
  initscr();
  curs_set(0);
  keypad(stdscr, TRUE);
  noecho();
  timeout(100);

  snake_lenght = 1;
  snake[0].x = WIDTH / 2;
  snake[0].y = HEIGHT;

  food.x = rand() % WIDTH;
  food.y = rand() % HEIGHT;
  direction = KEY_RIGHT;

}

void draw_game()
{
  clear();
  for (int i = 0; i < snake_lenght; i++)
  {
    mvprintw(snake[i].y, snake[i].x, "#");
  }
  mvprintw(food.y, food.x, "*");
  refresh();
}

void update_game()
{
  int ch = getch();
  if(ch != ERR)
  {
    if ((ch == KEY_UP && direction != KEY_DOWN) ||
        (ch == KEY_UP && direction != KEY_UP) ||
        (ch == KEY_RIGHT && direction != KEY_LEFT) ||
        (ch == KEY_LEFT && direction != KEY_RIGHT))
    {
      direction = ch;
    }
  }

  Point new_head = snake[0];
  if (direction == KEY_UP) new_head.y--;
  if (direction == KEY_DOWN) new_head.y++;
  if (direction == KEY_LEFT) new_head.x--;
  if (direction == KEY_RIGHT) new_head.x++;

  if (new_head.x < 0 || new_head.x >=WIDTH || new_head.y < 0 || new_head.y>= HEIGHT)
  {
    endwin();
    printf("Game Over!\n");
    exit(0);
  }

  for (int i = 0; i < snake_lenght; i++)
  {
    if (snake[i].x == new_head.x && snake[i].y == new_head.y)
    {
      endwin();
      printf("Game Over\n");
      exit(0);
    }
  }

  for (int i = snake_lenght; i > 0; i--)
  { 
    snake[i] = snake[i-1];
  }
  snake[0] = new_head;

  if (new_head.x == food.x && new_head.y == food.y)
  {
    snake_lenght++;
    food.x = rand() % WIDTH;
    food.y = rand() % HEIGHT;
  }
}

int main()
{
  srand(time(0));
  init_game();

  while (1)
  {
    draw_game();
    update_game();
  }
  endwin();
  return 0;
}


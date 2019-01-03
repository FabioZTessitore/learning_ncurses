/* 07_input_char.c */

#include <ncurses.h>

/* input of chars */

int main()
{
  int c;        /* a single character */

  initscr();
  curs_set(1);
  echo();

  cbreak();     /* disables line buffering */

  mvaddstr(3, 5, "Input a single char (DO NOT PRESS ENTER): ");
  c = getch();
  mvprintw(5, 5, "You Pressed %c", c);
  refresh();

  mvaddstr(9, 5, "Input another single char (DO NOT PRESS ENTER): ");
  c = getch();
  curs_set(0);
  noecho();
  mvprintw(11, 5, "You Pressed %c", c);
  refresh();

  getch();

  endwin();

  return 0;
}

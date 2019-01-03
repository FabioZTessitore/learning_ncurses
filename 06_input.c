/* 06_input.c */

#include <ncurses.h>

/* input */

int main()
{
  int num1, num2, sum = 0;

  initscr();
  curs_set(1);  /* cursor visible */
  echo();       /* input visible */

  mvaddstr(3, 5, "Integer Sum");

  mvaddstr(7, 5, "First Number: ");
  scanw("%d", &num1);

  mvaddstr(9, 5, "Second Number: ");
  scanw("%d", &num2);

  curs_set(0);  /* disable cursor after input */
  noecho();

  sum = num1 + num2;

  mvaddstr(13, 5, "The sum is: ");
  printw("%d", sum);

  refresh();
  getch();

  endwin();

  return 0;
}

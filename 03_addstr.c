/* 03_addstr.c */

#include <ncurses.h>

/* display a string */

int main()
{
  initscr();
  curs_set(0);

  /* display a string at row 3 (from 0) and column 5 (from 0) */
  move(3, 5);
  addstr("Hello, NCurses!");

  /* move and display */
  mvaddstr(7, 5, "Bye Bye NCurses");

  refresh();
  getch();

  endwin();

  return 0;
}

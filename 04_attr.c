/* 04_attr.c */

#include <ncurses.h>

/* change character attributes */

int main()
{
  initscr();
  curs_set(0);

  /* display a string in UNDERLINE mode */
  attron(A_UNDERLINE);
  mvaddstr(3, 5, "Hello, NCurses (UNDERLINE)");
  attroff(A_UNDERLINE);

  /* display a string in BOLD mode */
  attron(A_BOLD);
  mvaddstr(7, 5, "Hello, NCurses (BOLD)");
  attroff(A_BOLD);

  /* standout */
  attron(A_STANDOUT);
  mvaddstr(11, 5, "Hello, NCurses (STANDOUT)");
  attroff(A_STANDOUT);

  refresh();
  getch();

  endwin();

  return 0;
}

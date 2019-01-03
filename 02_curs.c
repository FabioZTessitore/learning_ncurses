/* 02_curs.c */

#include <ncurses.h>

/* disable the cursor */

int main()
{
  initscr();

  /* disable the cursor */
  curs_set(0);

  refresh();
  getch();

  endwin();

  return 0;
}

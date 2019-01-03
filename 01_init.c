/* 01_init.c */

#include <ncurses.h>

/* start ncurses and exit */

int main()
{
  /* init ncurses */
  initscr();

  /* refresh the screen and wait for a key */
  refresh();
  getch();

  /* exit ncurses */
  endwin();

  return 0;
}

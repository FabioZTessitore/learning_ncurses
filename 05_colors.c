/* 05_colors.c */

#include <stdlib.h>
#include <ncurses.h>

/* change colors */

int main()
{
  initscr();
  curs_set(0);

  /* test for colors */
  if (!has_colors()) {
    endwin();
    printf("No colors available\n");
    exit(1);
  }

  /* init colors */
  start_color();

  /* color codes:
   *
   * COLOR_BLACK
   * COLOR_RED
   * COLOR_GREEN
   * COLOR_YELLOW
   * COLOR_BLUE
   * COLOR_MAGENTA
   * COLOR_CYAN
   * COLOR_WHITE
   */

  /* define a color pair (FOREGROUND, BACKGROUND) */
  init_pair(1, COLOR_RED, COLOR_WHITE);

  /* display a string with colors */
  attron(COLOR_PAIR(1));
  mvaddstr(3, 5, "Hello, NCurses (With Colors)");
  attroff(COLOR_PAIR(1));

  refresh();
  getch();

  endwin();

  return 0;
}

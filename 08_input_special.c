/* 08_input_special.c */

#include <ncurses.h>

/* input of special characters (Fn KEY, Arrows) */

int main()
{
  int c;        /* a single character */

  initscr();
  curs_set(0);
  noecho();
  cbreak();

  /* enable keypad on standard screen */
  keypad(stdscr, TRUE);

  mvaddstr(3, 5, "Press F2 to continue");

  while ( (c=getch()) != KEY_F(2) )
    ;

  mvaddstr(7, 5, "OK, thanks");
  refresh();

  mvaddstr(18, 5, "Press a key to exit");

  refresh();
  getch();

  endwin();

  return 0;
}

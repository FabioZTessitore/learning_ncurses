/* 09_menu.c */

#include <ncurses.h>

/* A simple menu */

char *menuEntry[] = {
  "An Option",
  "Another Option",
  "Quit"
};

#define QUIT 3

void menu_print(WINDOW *screen, int startRow, int startCol, int actualChoice);

int main()
{
  int choice = -1;

  initscr();
  curs_set(0);
  noecho();
  cbreak();

  keypad(stdscr, TRUE);

  mvaddstr(3, 5, "A Simple Menu");
  menu_print(stdscr, 5, 5, choice);

  while (choice != QUIT) {
    choice = getch() - '0';
    menu_print(stdscr, 5, 5, choice);

    switch (choice) {
      case 1:
        mvprintw(12, 5, "%-40s", "You choose option 1");
        break;
      case 2:
        mvprintw(12, 5, "%-40s", "You choose option 2");
        break;
      default:
        mvprintw(12, 5, "%-40s", "Make a valid choice");
        break;
    }
  }

  endwin();

  return 0;
}

void menu_print(WINDOW *screen, int startRow, int startCol, int actualChoice)
{
  int i;

  static int menuItems = sizeof(menuEntry) / sizeof(char *);

  int attrs = 0;

  mvaddstr(startRow, startCol, "Please, Make A Choice");

  for (i = 0; i < menuItems; i++) {
    if (i+1 == actualChoice) {
      attrs = A_STANDOUT;
    } else {
      attrs = 0;
    }

    attron(attrs);
    mvprintw(startRow+i+2, startCol, "%d) %s", i+1, menuEntry[i]);
    attroff(attrs);
  }
}

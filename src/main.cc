#include "Characters.hh"
#include "Rooms.hh"
#include <iostream>
#include <ncurses.h>
#include <string>

using namespace std;

int main()
{
  Player test ("Bob", 20, 0, 20, 20, 1, 100, 0);

  Room room1 ("Test Room", "A Dull Room");
  
  initscr();
  cbreak();
  noecho();
  //char a = getch();
  int i;
  while(1)
    {
      echo();
      printw("> ");
      test.UserInput(room1);
      getch();
      clear();
      noecho();
      refresh();
    }
  refresh();
  getch();
  endwin();
}

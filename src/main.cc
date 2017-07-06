#include "Characters.hh"
#include <iostream>
#include <ncurses.h>
#include <string>

using namespace std;
using namespace Characters;

int main()
{
  Player test ("Bob", 20, 0, 20, 20, 1, 100, 0);
  
  initscr();
  while(1)
    {
      printw("> ");
      test.UserInput();
    }
  refresh();
  getch();
  endwin();
}

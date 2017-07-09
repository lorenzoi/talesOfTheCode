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
  cbreak();
  noecho();
  //char a = getch();
  int i;
  while(1)
    {
      echo();
      printw("> ");
      test.UserInput();
      getch();
      clear();
      noecho();
      refresh();
    }
  refresh();
  getch();
  endwin();
}

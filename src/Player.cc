#include "Characters.hh"
#include <ncurses.h>

using namespace std;
using namespace Characters;

void Player::UserInput()
{
  char uInput[999];
  getstr(uInput);
  if (uInput[0] == 'a')
    {
      printw("WORKS!\n");
      //getch();
      refresh();
    }
  //return uInput;
}

#include "Characters.hh"
#include <ncurses.h>
#include <iterator>

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
  else
    {
      printw("Unknown Command!\n");
      refresh();
    }
  //return uInput;
}

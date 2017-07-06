#include "Characters.hh"
#include <ncurses.h>

using namespace std;
using namespace Characters;

char* Player::UserInput()
{
  char* uInput;
  getstr(uInput);
  if (uInput == "a")
    {
      printw(uInput);
    }
  return uInput;
}

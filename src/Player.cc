#include "Characters.hh"
#include "Rooms.hh"
#include <ncurses.h>
#include <iterator>

using namespace std;

void Player::UserInput(Room room)
{
  char uInput[999];
  getstr(uInput);
  if (uInput[0] == 'a')
    {
      printw(room.name);
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

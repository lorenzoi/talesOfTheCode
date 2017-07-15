#ifndef CHARACTERS_HH
#define CHARACTERS_HH

#include <string>
#include <string.h>

using namespace std;

class Character
{
public:
  const char* name;
  int health, xp, mana, str, lvl, xpNxtLvl, coins;

  Character(const char* n, int h, int x, int m, int s, int l, int xnl, int c);
    
};
#include "Rooms.hh"
class Player: public Character
{
public:
  Player(const char* n, int h, int x, int m, int s, int l, int xnl, int c)\
    : Character(n,h,x,m,s,l,xnl,c) {}

  void UserInput(Room room);
    
};


#endif

#include "Characters.hh"

using namespace std;

Character::Character(const char* n, int h, int x, int m, int s, int l, int xnl, int c)
{

  name = n;
  health = h;
  xp = x;
  mana = m;
  str = s;
  lvl = l;
  xpNxtLvl = xnl;
  coins = c;
  
}


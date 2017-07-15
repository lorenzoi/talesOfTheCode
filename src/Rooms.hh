#ifndef ROOMS_HH
#define ROOMS_HH

//#include "Characters.hh"
class Room
{

public:
    
  //int items[100];
  const char* name;
  const char* desc;
  //const char* neighbours[4];

  Room(const char* n, const char* d);
    
};


#endif

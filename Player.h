#ifndef PLAYER_H
#define PLAYER_H

#include "Generic_Player.h"

using namespace std;

class Player : public Generic_Player{

public:

    Player(const string& name);
    virtual ~Player();

    virtual bool is_hitting();
    bool win();
    bool lose();
    bool push();

};

#endif
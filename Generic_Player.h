#ifndef GENERIC_PLAYER_H
#define GENERIC_PLAYER_H

#include "Hand.h"
#include <string>

using namespace std;

class Generic_Player{

public:

    Generic_Player();
    virtual ~Generic_Player();

    bool is_hitting();
    bool is_busted();
    bool bust();

    string get_name();
    void get_name(string name);

private:

    string name; 

};

#endif
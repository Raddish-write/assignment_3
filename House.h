#ifndef HOUSE_H
#define HOUSE_H

#include "Generic_Player.h"

using namespace std;

class House : public Generic_Player{

public:

    House(const string& name = "Dealer");
    virtual ~House();

    virtual bool is_hitting();
    void first_card();

};

#endif
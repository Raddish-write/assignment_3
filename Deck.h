#ifndef DECK_H
#define DECK_H

#include "Hand.h"
//#include "Generic_Player.h"
#include <vector>

using namespace std;

class Deck{

public:

    Deck();
    virtual ~Deck();

    void populate();
    void shuffle();
    void deal(Hand& hand);
    //void additional_cards(Generic_Player& generic_player);
    //uncomment once Generic_Player is made
};

#endif
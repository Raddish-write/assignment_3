#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include <vector>

using namespace std;

class Hand{

public:

    vector<Card> card_vector;

    Hand();
    
    virtual ~Hand();

    void add(Card* card_ptr);

    void clear_hand();

    int get_total();

};

#endif
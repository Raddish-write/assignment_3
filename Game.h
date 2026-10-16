#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "House.h"
#include "Player.h"

using namespace std;

class Game{

public:

    Game();
    ~Game();
    void play();

private:
    Deck deck;
    House house;
    Player player;

};

#endif
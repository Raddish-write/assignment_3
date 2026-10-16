#ifndef CARD_H
#define CARD_H

class Card {

public:

    enum class Suit{
        Hearts,
        Diamonds,
        Clubs, 
        Spades
    };

    enum class Rank{
        Ace,
        Two, 
        Three,
        Four, 
        Five, 
        Six, 
        Seven, 
        Eight, 
        Nine, 
        Ten, 
        Jack, 
        Queen, 
        King, 
    };

    Card(int suit = 1, int rank = 0, bool is_up = true);

    int get_value(); //remember logic for if 1, can also be 11

    void flip();

protected: 

    Suit SUIT;
    Rank RANK;

private:

    bool is_face_up;

};

#endif
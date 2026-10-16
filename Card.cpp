#include "Card.h"

Card::Card(int suit = 1, int rank = 0, bool is_up = true){
    

}

int Card::get_value(){
    switch(RANK){
        case Rank::Ace:
            return 1;
        case Rank::Two:
            return 2; 
        case Rank::Three:
            return 3;
        case Rank::Four:
            return 4;
        case Rank::Five:
            return 5;
        case Rank::Six:
            return 6;
        case Rank::Seven:
            return 7;
        case Rank::Eight:
            return 8;
        case Rank::Nine:
            return 9;
        case Rank::Ten:
        case Rank::Jack:
        case Rank::Queen:
        case Rank::King:
            return 10;
        //10 through king all worth 10
        //statement falls through to 10
    }
}

//except first round, is dealt face up, then keep face up 
void Card::flip(){
    bool is_face_up = true;
}
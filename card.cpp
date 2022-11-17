#include "card.h"

Card::Card(suit_t _suit, rank_t _rank)
{
    this->suit = _suit;
    this->rank = _rank;
}

Card::~Card()
{
}

int Card::value(){
    
    return rank;
}

string Card::toString(){
    string ret;

    switch (this->rank) {
        case ACE:
            ret.append("ACE");
            break;
        case TWO:
            ret = "TWO";
            break;
        case THREE:
            ret = "THREE";
            break;
        case FOUR:
            ret = "FOUR";
            break;
        case FIVE:
            ret = "FIVE";
            break;
        case SIX:
            ret = "SIX";
            break;
        case SEVEN:
            ret = "SEVEN";
            break;
        case EIGHT:
            ret = "EIGHT";
            break;
        case NINE:
            ret = "NINE";
            break;
        case TEN:
            ret = "TEN";
            break;
        case JACK:
            ret = "JACK";
            break;
        case QUEEN:
            ret = "QUEEN";
            break;
        case KING:
            ret = "KING";
            break;
    }

    ret.append(" OF");

    switch (this->suit) {
        case DIAMOND:
            ret.append(" DIAMONDS");
        break;
        case HEART:
            ret.append(" HEARTS");
        break;
        case SPADE:
            ret.append(" SPADES");
        break;
        case CLUB:
            ret.append(" CLUBS");
        break;
    }
    return ret;
}

rank_t Card::get_rank() {
    return this->rank;
}
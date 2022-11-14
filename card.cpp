#include "card.h"

Card::Card(suit_t _suit, char _value)
{
    this->suit = _suit;

    this->numberValue = _value;
}

Card::~Card()
{
}

int Card::value(){
    
    switch(this->numberValue) {
        case 'A':
            return 1;
        case 'T':
            return 10;
        case 'J':
            return 11;
        case 'Q':
            return 12;
        case 'K':
            return 13;
        default:
            return (int)numberValue - (int)'0';
    }
}

string Card::toString(){
    string ret;
    ret = this->numberValue;

    switch (this->suit) {
        case DIAMOND:
            ret.append(" D");
        break;
        case HEART:
            ret.append(" H");
        break;
        case SPADE:
            ret.append(" S");
        break;
        case CLUB:
            ret.append(" C");
        break;
    }
    return ret;
}
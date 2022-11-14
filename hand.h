#pragma once

#include "card.h"

class Hand
{
private:
    int value;
    int cardsNumber;
    bool haveAce;
    // Card *cardList;
public:
    // Hand(/* args */);
    // ~Hand();
    int getScore();
    bool resolveScore();
    void takeCard(Card newCard);
};

// Hand::Hand(/* args */)
// {
// }

// Hand::~Hand()
// {
// }

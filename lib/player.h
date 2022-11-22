#pragma once

#include "hand.h"

class Base_player
{
private:
    Hand hand;

public:

    Player(/* args */);
    ~Player();

    /**
     * @brief Take card to the hand
     * 
     * @param card 
     */
    void take_card(Card card);
    
    // Auxiliary
    Hand get_hand();
};

class Dealer: public Base_player
{
public:

    void deal_card_to_other_player(Card shoe_card);
    void deal_card_to_himself(Card shoe_card);
};

class Player: public Base_player
{
private:    
    int bet;
public:

    void stand();
    void hit();
    void split();
    void giveUp();
    void doubleDown();
};

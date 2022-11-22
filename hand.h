#pragma once
#include "card.h"
using namespace std;

/**
 * @brief Object representing the a hand of playing cards.
 * This hand contains playing cards and it is assigned a blackjack game score according to these cards
 * 
 */
class Hand
{
private:
    /**
     * @brief Game score according to cards in the object representing the hand.
     * 
     */
    int score;
    /**
     * @brief Vector with the Card objects in the dealer or players hand.
     * 
     */
    vector<Card> cards_vector;
public:
    Hand(/* args */);
    /**
     * @brief Recieve a card and add the card to the hand.
     * 
     * @param card card to be recieve
     */
    void recieve_card(Card card);
    /**
     * @brief Return the score of the Hand accordingly to the blackjack rules.
     * 
     * @return int 
     */
    int get_score();

};

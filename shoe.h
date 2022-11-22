#pragma once
#include "card.h"
using namespace std;

/**
 * @brief Number of decks in  the shoe.
 * 
 */
#define NUMBER_OF_DECKS 1

/**
 * @brief Object representing the a dealing shoe. A dealing shoe is a gaming device used to hold multiple decks of playing cards.
 * 
 */
class Shoe
{
private:
    /**
     * @brief Vector with 52 Card objects per deck. The number of decks is defined in NUMBER_OF_DECKS macro.
     * 
     */
    vector<Card> cards_vector;

public:
    /**
     * @brief Construct a new Shoe object with the cards of the NUMBER_OF_DECKS
     * 
     */
    Shoe();
    /**
     * @brief Shuffle the cards position in the shoe cards_vector.
     * 
     */
    void shuffle();
    /**
     * @brief Remove a card from back of the Shoe cards_vector and return the card. 
     * 
     * @return Card removed from the shoe
     */
    Card draw_card();
    // Auxiliary methods
    void showShoe();
    string to_string();
    // int size();
    
};



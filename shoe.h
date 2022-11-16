#pragma once
#include "card.h"
#include <bits/stdc++.h>
using namespace std;

#define NUMBER_OF_DECKS 1

class Shoe
{
private:
    vector<Card> cardsList;

public:
    /**
     * @brief Construct a new Shoe object
     * 
     */
    Shoe();
    ~Shoe();
    /**
     * @brief 
     * 
     */
    void showShoe();
    void shuffle();
    Card drawCard();
    
};



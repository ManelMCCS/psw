#pragma once
#include "card.h"
#include "shoe.h"
#include <bits/stdc++.h>
#include "cli_interface.h"
using namespace std;

class Hand
{
private:
    int score;
    vector<Card> cards_vector;
public:
    Hand(/* args */);
    ~Hand();
    /**
     * @brief diz a pontuçao atual da mao
     * 
     * @return int 
     */
    int get_score();
   /**
    * @brief  
    * 
    * @return true 
    * @return false 
    */
    int resolve_score();
    /**
     * @brief 
     * 
     * @param newCard 
     */
    Card takeCard(Shoe *shoe);
    string to_string();
};


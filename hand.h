#pragma once

#ifned HAND_H
#define HAND_H

#include "card.h"

class Hand
{
private:
    int value;
    int cardsNumber;
    Card *cardList;
public:
    Hand(/* args */);
    ~Hand();
    /**
     * @brief diz a pontuçao atual da mao
     * 
     * @return int 
     */
    int getScore();
   /**
    * @brief  
    * 
    * @return true 
    * @return false 
    */
    bool resolveScore(bool ace_is_eleven);
    /**
     * @brief 
     * 
     * @param newCard 
     */
    void takeCard(Card newCard);
};


#pragma once

#include "player.h"
#include "shoe.h"


class Table
{
private:
    Player player;
    Shoe shoe;
    Hand dealersHand;

public:
    Table(Player player);
    ~Table();
    
    void place_bet();
    void shuffle_cards();
    void deal_cards_to_player();
    void deal_cards_to_dealer();
    void ask_player();
    int resolve_game(); //dealer shows his cards; and return the players wins or loses


};
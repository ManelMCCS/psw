#pragma once

#include "player.h"
#include "shoe.h"
#include "hand.h"
#include "card.h"
#include "interface_choices.h"
#include "cli_interface.h"

typedef enum {
    WIN_ERROR = 0,
    DRAW_GAME,
    PLAYER_WINS,
    DEALER_WINS
} winner_t;

class Table
{
private:
    Player player;
    Dealer dealer;
    Shoe shoe;

public:
    Table(Player player_p);
    ~Table();

    void shuffle_cards(); //baralha as cartas
    void set_bet(); // define a aposta do jogador
    void deal_cards();
    void player_move(); //player plays hit, stand, etc.
    void dealer_move();
    winner_t resolve_game(); //dealer shows his cards; and return the players wins or loses
};
#pragma once

#include "player.h"
#include "shoe.h"
#include "hand.h"

enum GAME_RESULT {
    ERROR_RESULT = 0,
    PLAYER_WINS,
    DEALER_WINS,
    PLAYER_BUSTED,
    DEALER_BUSTED
}

class Game
{
private:
    Player user;

public:
    Game();
    ~Game();
    void start();
    
    void play(); // starts a new table, plays the game and in the end update the user balance with the game result 
    
    void menu_start();
    void rules();
};



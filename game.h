#pragma once

#include "player.h"
#include "shoe.h"
#include "hand.h"

class Game
{
private:
    Player player;
    Shoe shoe;
    Hand dealersHand;

public:
    game(/* args */);
    ~game();
    void start();
    void hit();
    void split();
    void stand();
    void giveUp();
    void doubleDown();
};

game::game(/* args */)
{
}

game::~game()
{
}
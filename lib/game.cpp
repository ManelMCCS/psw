#include "game.h"

Game::Game(/* args */)
{
}

Game::~Game()
{
}

void Game::start() {
    enter_table();
    return;
}

void Game::enter_table() {
    Player player = user.get_player();
    
    Table table(player);
    
    return;
}
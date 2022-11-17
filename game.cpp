#include "game.h"

Game::Game(/* args */)
{
}

Game::~Game()
{
}

void Game::start() {
    shoe.shuffle();
    deal_cards();
    // shoe.drawCard();

    this->shoe;
    return;
}

void Game::play() {
    Table(this->user.player);
}

void 
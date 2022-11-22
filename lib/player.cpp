#include "player.h"

Player::Player(/* args */)
{
}

Player::~Player()
{
}

void Player::take_card(Card card) {
    hand.add_card(card);
}

Hand Player::get_hand() {
    return this->hand;
}
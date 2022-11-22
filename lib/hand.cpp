#include "hand.h"


Hand::Hand(/* args */)
{
    this->score = 0;
}

Hand::~Hand()
{
}

bool Hand::add_card(Card card) {

    this->cards_vector.push_back(card);

    return true;
}

int Hand::get_score() {
    return this->score;
}

string Hand::to_string() {

    string cards_s;
    string aux_s;

    vector<Card>::iterator it;
    for (it = cards_vector.begin(); it != cards_vector.end(); ++it) {
        aux_s = it->to_string();
        cards_s.append(aux_s);
        cards_s.append("; ");
    }

    return cards_s;
}

Card Hand::get_card(int pos) {
    return cards_vector[pos];
}

vector<Card> Hand::get_cards_vector() {
    return this->cards_vector;
}
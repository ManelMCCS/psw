#pragma once

enum suit_t
{
    SUITE_ERROR = 0,
    HEART,
    SPADE,
    CLUB,
    DIAMOND
};

class Card
{
private:
    suit_t suit;
    char numberValue;

public:
    card(/* args */);
    ~card();
    int cardValue();
};

card::card(/* args */)
{
}

card::~card()
{
}

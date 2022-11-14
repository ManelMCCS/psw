#pragma once
#include <bits/stdc++.h>
using namespace std;

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
    Card(suit_t _suit, char _numberValue);
    ~Card();
    int value();
    string toString();
};

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

enum rank_t
{
    RANK_ERROR = 0,
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

class Card
{
private:
    suit_t suit;
    rank_t rank;
public:
    Card(suit_t _suit, rank_t _rank);
    ~Card();
    int value();
    string toString();
};
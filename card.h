#pragma once
#include <bits/stdc++.h>
#include <cstdlib>
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
    KING,
    RANK_END
};

class Card
{
private:
    suit_t suit;
    rank_t rank;
public:
    /**
     * @brief Construct a new Card object
     * 
     * @param _suit naipe 
     * @param _rank valor 

     */
    Card(suit_t _suit, rank_t _rank);
    ~Card();
    /**
     * @brief retorna um inteiro com o valor da carta 
     * 
     * @return int 
     */
    int value();
    /**
     * @brief 
     * 
     * @return string com o conteudo da carta 
     */
    string toString();
    rank_t get_rank();
};
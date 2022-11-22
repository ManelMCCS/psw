#pragma once

/**
 * @brief Enumeration of the diferent suits in a deck of cards. The integer value given by the enumeration has no meaming.
 * 
 */
enum suit_t
{
    SUITE_ERROR = 0,
    HEARTS,
    SPADES,
    CLUBS,
    DIAMONDS,
    SUIT_END
};

/**
 * @brief Enumeration of the diferent ranks in a deck of cards.
 * The integer value given by the enumeration is only equivalent to the game value of the rank between ACE and TEN, since the figures value is alaqays 10.
 * 
 */
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

/**
 * @brief Object representing the a convetional playing card.
 * 
 */
class Card
{
private:
    /**
     * @brief Suit of the object representing a card.
     * 
     */
    suit_t suit;
        /**
     * @brief Rank/Value of the object representing a card.
     * 
     */
    rank_t rank;
public:
    /**
     * @brief Construct a new Card object with the given rank and suit.
     * 
     * @param _suit card suit
     * @param _rank card rank 

     */
    Card(suit_t _suit, rank_t _rank);
    /**
     * @brief Return the rank of the Card.
     * 
     * @return rank_t 
     */
    rank_t get_rank();
    
    // Auxiliary methods
    /**
     * @brief 
     * 
     * @return string com o conteudo da carta 
     */
    string to_string();
};
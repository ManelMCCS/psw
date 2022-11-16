#include "shoe.h"

// void Shoe::showShoe()
// {
    
//     list<Card>::iterator it;
//     for (it = cardsList.begin(); it != cardsList.end(); ++it)
//         cout << it->toString() <<endl;
//     cout << '\n';
// }

Shoe::Shoe()
{   
    suit_t suit_list[] = {HEART, SPADE, CLUB, DIAMOND};

    int shoe_index = 0;
    for(int decks_index = 0; decks_index < NUMBER_OF_DECKS; decks_index++){
        for(int suits_index = 0; suits_index < 4; suits_index++){
            for(int rank_iterator = ACE; rank_iterator != RANK_END; rank_iterator++) {
                Card cardObj(suit_list[suits_index], (rank_t)rank_iterator);
                // cout << cardObj.toString() <<"\n";
                cardsList.push_back(cardObj);
            }
        }
    }
}

Shoe::~Shoe()
{
}

int my_radom_function(int i) {
   return rand()%i;
}

void Shoe::shuffle() {
    std::srand ( unsigned ( std::time(0) ) );
    random_shuffle(cardsList.begin(), cardsList.end(), my_radom_function);
    return;
}

Card Shoe::drawCard() {
    
    Card cart_to_draw = cardsList.back();
    cardsList.pop_back();
    
    return cart_to_draw;
}
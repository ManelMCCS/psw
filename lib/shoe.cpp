#include "shoe.h"

// void Shoe::showShoe()
// {
    
//     list<Card>::iterator it;
//     for (it = cards_vector.begin(); it != cards_vector.end(); ++it)
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
                cards_vector.push_back(cardObj);
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
    random_shuffle(cards_vector.begin(), cards_vector.end(), my_radom_function);
    return;
}

Card Shoe::draw_card() {
    
    Card cart_to_draw = cards_vector.back();
    cards_vector.pop_back();
    
    return cart_to_draw;
}
string Shoe::to_string() {

    string cards_s;
    string aux_s;

    vector<Card>::iterator it;
    for (it = this->cards_vector.begin(); it != this->cards_vector.end(); ++it) {
        aux_s = it->to_string();
        cards_s.append(aux_s);
        cards_s.append("; ");
    }

    return cards_s;
}

int Shoe::size() {
    return this->cards_vector.size();
}
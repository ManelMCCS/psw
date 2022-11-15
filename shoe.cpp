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
    int numberOfDecks = 1;
    
    suit_t suit_list[] = {HEART, SPADE, CLUB, DIAMOND};
    char valuesList[] = {ACE, '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    int shoe_index = 0;
    for(int decks_index = 0; decks_index < numberOfDecks; decks_index++){
        for(int suits_index = 0; suits_index < 4; suits_index++){
            for(int value_index = 0; value_index < 13; value_index++) {
                Card cardObj(suit_list[suits_index], valuesList[value_index]);
                // cout << cardObj.toString() <<"\n";
                cardsList.push_back(cardObj);
            }
        }
    }
}

Shoe::~Shoe()
{
}

void Shoe::shuffle() {
    random_shuffle(cardsList.begin(), cardsList.end());
    return;
}

Card Shoe::drawCard() {
    
    Card dummyCard = cardsList.back();
    cardsList.pop_back();
    
    return dummyCard;
}
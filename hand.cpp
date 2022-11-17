#include "hand.h"


Hand::Hand(/* args */)
{
    this->score = 0;
}

Hand::~Hand()
{
}

Card Hand::takeCard(Shoe *shoe) {
    
    Card shoe_card = shoe->drawCard();

    this->cards_vector.push_back(shoe_card);

    // if (shoe_card.rank == ACE) {
        // muda o valor do as para ficar guardado e quando contar os pontos saber
    // }    
    resolve_score();
    return shoe_card;
}

int Hand::get_score() {
    return this->score;
}

int Hand::resolve_score() {
    
    int aux_score = 0;
    
    vector<Card>::iterator it;
    for (it = cards_vector.begin(); it != cards_vector.end(); ++it) {
        
        if(it->get_rank() == ACE) {
            aux_score = ask_ace_to_user();
        }
        else {
            aux_score =  (int)it->get_rank();
        }

    }
    this->score = aux_score;

    return aux_score;
}

string Hand::to_string() {

    string cards_s;
    string aux_s;

    vector<Card>::iterator it;
    for (it = cards_vector.begin(); it != cards_vector.end(); ++it) {
        aux_s = it->toString();
        cards_s.append(aux_s);
        cards_s.append("; ");
    }

    return cards_s;
}

void Hand::play() {
    
    

    switch () {
        case 1: 
            hit();
        case 2: 
            split();
        case 3: 
            stand();
        case 4: 
            giveUp();
        case 5: 
            doubleDown();
    }
}
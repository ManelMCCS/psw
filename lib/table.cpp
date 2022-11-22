#include "table.h"

Table::Table(Player player)
{
    this->player = player;
}

Table::~Table()
{
}

void Table::start_playing() {
    // place_bet();
    // shuffle_cards();
    // deal_cards_to_player();
    // deal_cards_to_dealer();
    // player_move();
    // resolve_game();

    return;
}

void Table::deal_card_to_player() {
    Card card = shoe.draw_card();
    this->player.take_card(card);
    deal_cards_animation();
    show_player_card(card.to_string());
}

void Table::deal_card_to_dealer(bool show_card) {
    Card card = shoe.draw_card();
    this->player.take_card(card);
    deal_cards_animation();
    if(show_card) {
        show_dealer_card(card.to_string());
    }
}

void Table::deal_cards() {
    
    deal_card_to_player();
    deal_card_to_dealer(true);
    deal_card_to_player();
    deal_card_to_dealer(false);
    player_move();
    resolve_game();

    return;
}

int resolve_score_aux(vector<Card> *cards_vector, int *n_aces) {
    int aux_score = 0;
    *n_aces = 0;
    
    vector<Card>::iterator it;
    for (it = cards_vector->begin(); it != cards_vector->end(); ++it) {
        
        rank_t card_rank = it->get_rank();
        
        if(card_rank == ACE) {
            aux_score += 1;
            *n_aces += 1;
        }
        else if((int)card_rank > 10){
            aux_score += 10;
        }
        else {
            aux_score += (int)card_rank;
        }
    }
    
    if(aux_score > 21) {
        return aux_score;
    }
    
    aux_score -= *n_aces;

    return aux_score;
}

int Table::resolve_player_score() {
    
    Hand hand = player.get_hand();
    vector<Card> cards_vector = hand.get_cards_vector();
    int n_aces = 0;
    int score = resolve_score_aux(&cards_vector, &n_aces);
    
    if (21 < score) {
        return score;
    }

    for (int i = 0; i < n_aces; i++) {
        score += ask_ace_to_player();
    }

    return score;
}

int compute_aces_values_for_dealer(int score, int n_aces) {
    if (n_aces == 0) return 0;

    if (n_aces == 2) return 2;
   
    int aux_score = 21 - (11 + score);
    if(aux_score > -1) {
        return 11;
    }
    
    return 1;
}

int Table::resolve_dealer_score() {
    
    int n_aces = 0;
    vector<Card> cards_vector = dealers_hand.get_cards_vector();
    int score = resolve_score_aux(&cards_vector, &n_aces);
    
    if (21 <  score) {
        return score;
    }

    score += compute_aces_values_for_dealer(score, n_aces);

    return score;
}

winner_t Table::resolve_game() {
    
    Card hidden_card = dealers_hand.get_card(1);
    show_dealer_card(hidden_card.to_string());

    int player_score = resolve_player_score();
    int dealer_score = resolve_dealer_score();
    
    if((21 <  player_score ) && (21 <  dealer_score )) {
        return DRAW_GAME;
    }
    if(player_score == dealer_score ) {
        return DRAW_GAME;
    }
    if((21 <  player_score ) || (player_score <  dealer_score )) {
        return DEALER_WINS;
    }
    if((21 <  dealer_score ) || (player_score > dealer_score )) {
        return PLAYER_WINS;
    }

    return WIN_ERROR;
}

void hit() {
    return;
}


void play_table_choice(player_table_choice_t choice) {

    switch (choice) {
        case HIT:
            hit();
            break;
        case STAND:
            break;
    }
}

void Table::player_move() {
    
    player_table_choice_t choice;
    
    bool is_to_stand = false;
    bool is_player_busted = false;

    do {
        choice = ask_player_table_choice();
        
        play_table_choice(choice);

        is_to_stand = (STAND != choice);
        is_player_busted = 21 <  resolve_player_score();

    } while(is_to_stand || is_player_busted);
}


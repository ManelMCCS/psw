#pragma once

#include "interface_choices.h"
#include <bits/stdc++.h>
using namespace std;

int ask_ace_to_player();
template <class T> void print_object(T object) {
    cout << object.to_string() << '\n';
}

player_table_choice_t ask_player_table_choice();

void deal_cards_animation();
void show_player_card(string card_string);
void show_dealer_card(string card_string);
void ask_bet_to_user();
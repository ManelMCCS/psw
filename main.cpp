#include "stdio.h"
// #include "game.h"
#include "card.h"
#include "shoe.h"
#include "hand.h"
#include <bits/stdc++.h>
#include "cli_interface.h"

int main(void) {
    printf("welcome \n");
    Shoe mainShoe;
    mainShoe.shuffle();
    Hand players_hand;
    players_hand.takeCard(&mainShoe);
    players_hand.takeCard(&mainShoe);
    players_hand.takeCard(&mainShoe);
    print_object(players_hand);

}
#include "stdio.h"
// #include "game.h"
#include "card.h"
#include "shoe.h"
#include <bits/stdc++.h>

int main(void) {
    printf("welcome \n");
    Shoe mainShoe;
    mainShoe.shuffle();
    Card obj1 = mainShoe.drawCard();
    Card obj2 = mainShoe.drawCard();
    cout << obj1.toString() << '\n';
    cout << obj2.toString() << '\n';

    // // mainShoe.showShoe();
    // Card obj3 = mainShoe.drawCard();

    // cout << obj3.toString() << '\n';
    // // mainShoe.showShoe();

}
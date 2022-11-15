#include "stdio.h"
// #include "game.h"
#include "card.h"
#include "shoe.h"
#include <bits/stdc++.h>

int main(void) {
    printf("welcome \n");
    Shoe mainShoe;
    Card obj1 = mainShoe.drawCard();
    // mainShoe.showShoe();
    // mainShoe.shuffle();
    Card obj2 = mainShoe.drawCard();
    Card obj3 = mainShoe.drawCard();
    cout << obj1.toString() << '\n';
    cout << obj2.toString() << '\n';
    cout << obj3.toString() << '\n';
    // mainShoe.showShoe();

}
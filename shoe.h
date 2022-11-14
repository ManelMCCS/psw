#pragma once
#include "card.h"
#include <bits/stdc++.h>
using namespace std;

class Shoe
{
private:
    vector<Card> cardsList;

public:
    Shoe();
    ~Shoe();
    void showShoe();
    void shuffle();
    Card drawCard();
    
};



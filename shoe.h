#pragma once

class shoe
{
private:
    int numberOfDecks = 6;
    Card **decksList;

public:
    shoe(/* args */);
    ~shoe();
    void shuffle();
    Card drawCard();
    
};

shoe::shoe(/* args */)
{
}

shoe::~shoe()
{
}

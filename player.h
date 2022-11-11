#pragma once

class Player
{
private:
    Hand hand;
    int bet;
    String name;
    String email;
    String username;
    String password;
    in balance;
public:
    player(/* args */);
    ~player();
    
    bool changePassword();
    bool changeEmail();
    bool deleteAccount();
    bool addMoney(int amount);
    bool retireMoney(int amount);
};

player::player(/* args */)
{
}

player::~player()
{
}
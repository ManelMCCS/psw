#pragma once

#include "hand.h"
#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
    Hand hand;
    int bet;
    string name;
    string email;
    string username;
    string password;
    int balance;
public:
    Player(/* args */);
    ~Player();
    
    bool changePassword();
    bool changeEmail();
    bool deleteAccount();
    bool addMoney(int amount);
    bool retireMoney(int amount);
};


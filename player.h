#pragma once

#include "hand.h"
#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
    Hand hand;
    int bet;
public:
    Player(/* args */);
    ~Player();
    
    void hit();
    void stand();
    
    void split();
    void giveUp();
    void doubleDown();
};

class User
{
private:
    Player player;
    string name;
    string email;
    string username;
    string password;
    int balance;
public:
    User(/* args */);
    ~User();
    
    bool changePassword();
    bool changeEmail();
    bool deleteAccount();
    bool addMoney(int amount);
    bool retireMoney(int amount);
};


#pragma once

#include "player.h"
using namespace std;


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

    Player get_player();
    
    bool changePassword();
    bool changeEmail();
    bool deleteAccount();
    bool addMoney(int amount);
    bool retireMoney(int amount);
};
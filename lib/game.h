#pragma once

#include "user.h"
#include "table.h"

class Game
{
private:
    User user;
    Table table;
    UI ui;

public:
    Game();
    ~Game();
    
    void start(); // starts a new table, plays the game and in the end update the user balance with the game result 
    
    
    void login();
    void create_account();
    void show_rules();
    void manage_wallet();
    void enter_table();
    void change_account();
};



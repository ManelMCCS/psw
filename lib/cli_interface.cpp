#include "cli_interface.h"

int ask_ace_to_player() {
    cout << "you have got an ACE! \n";
    cout << "press '\'a\' to get 1 point and '\'t\' to get 11 points: ";

    char choice;
    cin >> choice;

    switch (choice) {
        case 'a':
            return 1;
        case 't':
            return 11;
    }

    return 0;
}

player_table_choice_t ask_player_table_choice() {
    cout << "press '\'h\' to hit \n";
    cout << "press '\'s\' to stand \n";

    char choice;
    cin >> choice;

    switch (choice) {
        case 'h':
            return HIT;
        case 's':
            return STAND;
    }

    return CHOICE_ERROR;
}

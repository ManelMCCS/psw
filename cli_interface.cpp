#include "cli_interface.h"

int ask_ace_to_user() {
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
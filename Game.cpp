#include "header.hpp"
#include "Game.hpp"

// function definitions

// menu
int Game::menu() {
    int choice = 0;

    system("cls");

    cout << "Welcome to Programming Assignment #1 -- Made by: Davit Mkhoyan" << endl;
    cout << "1. View Rules" << endl;
    cout << "2. Play" << endl;
    cout << "3. Add Command" << endl;
    cout << "4. Remove Command" << endl;
    cout << "5. Display all commands" << endl;
    cout << "6. Leaderboard" << endl;
    cout << "7. Save + Exit" << endl;

    cout << "\n Choose an option 1-7";
    cin >> choice;

    int exit = 0;
    
    do {
            switch (choice) {
        case 1:
            system("cls");
            cout << "Viewing Rules..." << endl;
            system("pause");

            // input rules here
            rules();
            break;

        case 2:
            system("cls");
            cout << "Creating Game..." << endl;
            system("pause");

            // input game creation function here

            break;

        case 3:
            system("cls");
            cout << "Adding Command Selected..." << endl;
            system("pause");

            // input command selection function

            break;

        case 4:
            system("cls");
            cout << "Removing Command Selected..." << endl;
            system("pause");

            // input removing command selected

            break;

        case 5:
            system("cls");
            cout << "Displaying All Commands..." << endl;
            system("pause");

            // input command display

            break;

        case 6:
            system("cls");
            cout << "Travelling to Leaderboard..." << endl;
            system("pause");

            // input leaderboard function

            break;

        case 7:
            system("cls");
            
            // enter saving & exiting function
            
            cout << "Saved an exited. Goodbye!";
            system("pause");

            break; 

            }
            
    } while (exit != 0 && choice >= 1 && choice <= 7);

    return 0;
}

// rules
int Game::rules() {

    int input = -1;
    system("cls");

    cout << "The rules are simple: The user will be presented with 20 MCQs on linux commands and "
            "       their scores will be tracked for maintaining leaderboard" << endl;

    cout << "Enter any key to exit..";
    system("pause");

    menu();
}

// add commands

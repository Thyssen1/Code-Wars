#pragma once

// Include pre-processor directives
#include <game.h>
#include <iostream>

// Rules
void rules() {
    // Clear command line
    system("cls");

    // Write rules to output stream
    std::cout << "\t \t ===== CASINO NUMBER GUESSING RULES ===== \n";
    std::cout << "\t 1. Choose a number between 1 and 10. \n";
    std::cout << "\t 2. A winning number results in return of 10 times the bet. \n";
    std::cout << "\t 3. A losing number results in no return. \n \n";
}

// Get bet from user
void get_bet(const std::string& playerName, unsigned int& bet, const unsigned int& balance) {
    // Get player's balance
    do {
        std::cout << "Hey, " << playerName << ", enter betting amount: $";
        std::cin >> bet;

        if ( bet > balance) {
            std::cout << "Betting balance cannot be exceed current balance!";
        }
    } while (bet > balance);
}

void game_round(const std::string& playerName, int& guess, unsigned int& balance, int& dice, unsigned int& bet) {
    do {
        std::cout << "Guess any betting number between 1 and 10 : \n";
        std::cin >> guess;
        if (guess <= 0 || guess > 0) {
            std::cout << "Number should be between 1 and 10 \n";
        }
    } while (guess <= 0 || guess > 10);

    dice = rand() % 10 + 1;
    if (dice == guess) {
        std::cout << "You are in luck! You have won $" << bet * 10;
        balance += bet*10;
    } else {
        std::cout << "Oops, better luck next time! You lost $" < bet << "\n";
        balance =- bet;
    }

    



}



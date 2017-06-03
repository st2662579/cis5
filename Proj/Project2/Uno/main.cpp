/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on June 2, 11:54 AM
 * Purpose:  Uno
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <ctime>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Function Prototypes
string getColor(int id) {
    string color;
    switch (id) {
        case 1:
            color = "RED";
            break;
        case 2:
            color = "GREEN";
            break;
        case 3:
            color = "YELLOW";
            break;
        case 4:
            color = "BLUE";
            break;       
    }
    return color;
}

string convert(int card[2]) {
    string color;
    string type;
    
    if (card[0] <= 4) {
        color = getColor(card[0]);
        switch (card[1]) {
            case 0:
                type = "0";
                break;
            case 1:
                type = "1";
                break;
            case 2:
                type = "2";
                break;
            case 3:
                type = "3";
                break;
            case 4:
                type = "4";
                break;
            case 5:
                type = "5";
                break;
            case 6:
                type = "6";
                break;
            case 7:
                type = "7";
                break;
            case 8:
                type = "8";
                break;
            case 9:
                type = "9";
                break;
        }
    } else if (card[0] >= 5 && card[0] < 7) {
        color = getColor(card[1]);
        type = (card[0] == 5 ? "SKIP" : "DRAW TWO");
    } else {
        color = "WILD";
        type = (card[0] == 7 ? "" : "DRAW FOUR");
    }
    return (color + " " + type);
}

//Execution begins here
int main(int argc, char** argv) {
    
    // Declare variables

    // Numbered cards
    int number[19] = {0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};

    // Variables for playing again
    bool playAgain = false; // if true, the loop will continue
    char repeat; // user input for settings playAgain to true or false
    
    int cardChosen;
    
    do {
        srand(time(NULL));

        // Vectors that contain decks
        vector<vector<int> > playerCards;
        vector<vector<int> > cpuCards;
        vector<vector<int> > cards;
        vector<vector<int> > discard;

        // Generate the deck
        for (int color = 1; color<=4; color++) {
            /*
             Red = 1;
             Green = 2;
             Yellow = 3;
             Blue = 4;
             */

            // Insert numbered cards
            for (int n = 0; n<19; n++) {
                vector<int> newCard;
                newCard.push_back(color);
                newCard.push_back(number[n]);
                cards.push_back(newCard);
            }

            // Insert special cards
            for (int type = 5; type<=8; type++) {
                /*
                 * 5 = Skip
                 * 6 = Draw Two
                 * 7 = Wild
                 * 8 = Wild Draw Four
                 */
                for (int amount = 1; amount<=(type < 7 ? 2 : 1); amount++) {
                    vector<int> specialCard;
                    specialCard.push_back(type);
                    specialCard.push_back(color);
                    cards.push_back(specialCard);
                }
            }
        }

        // Deal cards to player and CPU
        for (int user = 0; user <= 1; user++) {
            for (int numCards = 0; numCards < 7; numCards++) {
                int chosenCard = rand() % cards.size(); // Choose a random card from the deck
                vector<int> playerCard;
                playerCard.push_back(cards[chosenCard][0]);
                playerCard.push_back(cards[chosenCard][1]);
                if (user == 0) {
                    playerCards.push_back(playerCard);
                } else {
                    cpuCards.push_back(playerCard);
                }
                cards.erase(cards.begin() + chosenCard); // Take that card out of the deck so nobody else can have it
            }
        }
    
        cout << "### Welcome to UNO! ###\n";
        cout << "Here is your deck! ...\n";
        
        for (int card = 0; card < 7; card++) {
            int thisCard[2] = {playerCards[card][0], playerCards[card][1]};
            cout << (card + 1) << ". " << convert(thisCard) << endl;
        }
        
        cout << endl;
        
        // Take a card out from the deck and place it in the discard pile
        discard.push_back(cards[0]);
        cards.erase(cards.begin());
        
        int thisCard[2] = {discard[0][0], discard[0][1]};
        cout << "The top discard card is a " << convert(thisCard) << endl;
        cout << "What card would you like to play? (1-7): ";
        
        cin >> cardChosen;
        
        while ((cardChosen < 1) || (cardChosen) > playerCards.size()) {
            cout << endl << "This card is invalid. Please choose another one: ";
            cin >> cardChosen;
        }        
        cout << endl;

        
        // Ask the user if they want to play again.
        cout << "Play again? (Y/N)\n";
        cin >> repeat;
        if (repeat == 'Y' || repeat == 'y') {
            playAgain = true;
        } else {
            playAgain = false;
        }
    } while (playAgain == true);

    return 0;
}
/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on April 16, 2017, 6:06 PM
 * Purpose:  Rock paper scissors
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

int convertInput(char input) {
    if (input == 'R' || input == 'r') {
        return 1;
    } else if (input == 'P' || input == 'p') {
        return 2;
    } else if (input == 'S' || input == 's') {
        return 3;
    }
}

int winner(int player1, int player2) {
    // Calculate the winner
    // 1 = rock, 2 = paper, 3 = scissors
    
    player1 = convertInput(player1);
    player2 = convertInput(player2);
    
    if (player1 == 1) {
        if (player2 == 1) { // If player2 chooses rock and player1 chooses rock
            return 0;
        } else if (player2 == 2) { // If player2 chooses paper and player1 chooses rock
            return 2;
        } else if (player2 == 3) { // If player2 chooses scissors and player1 chooses rock
            return 1;
        }
    } else if (player1 == 2) {
        if (player2 == 1) { // If player2 chooses rock and player1 chooses paper
            return 1;
        } else if (player2 == 2) { // If player2 chooses paper and player1 chooses paper
            return 0;
        } else if (player2 == 3) { // If player2 chooses scissors and player1 chooses paper
            return 2;
        }
    } else if (player1 == 3) {
        if (player2 == 1) { // If player2 chooses rock and player1 chooses scissors
            return 2;
        } else if (player2 == 2) { // If player2 chooses paper and player1 chooses scissors
            return 1;
        } else if (player2 == 3) { // If player2 chooses scissors and player1 chooses scissors
            return 0;
        }
    }
}

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    // Declare variables
    
    bool playAgain = false;
    char repeat;
    char player1, player2;
  
    // Play the game
    do {
        
        // Declare variables
        int p1Score = 0;
        int p2Score = 0;
        int bestOf = 3;
        
        // Introduction
        cout << "Welcome to Rock, Paper, Scissors!\n";
        cout << "Rock beats scissors, paper beats rock, and scissors beats paper.\n";
        cout << "Best of how many games will be played? (3 or 5): ";
        
        // Determine how many games will be played
        cin >> bestOf;
        bestOf = (bestOf == 5 ? 5 : 3);
        
        cout << endl << "Let's begin.\n";
        
        // Loop until matches have finished
        for (int match=1; match <= bestOf; match = match + 1) {
            // Check if a player has won
            if ((p1Score / bestOf < 0.5) && (p2Score / bestOf < 0.5)) { 
                cout << "MATCH " << match;
                
                // Inputs
                
                cout << endl << "Player 1, enter R for Rock, P for Paper, and S for Scissors: ";
                cin >> player1;
                cout << endl << "Player 2, enter R for Rock, P for Paper, and S for Scissors: ";
                cin >> player2;
                cout << endl << "Let's determine the results...\n";
                
                // Determine the winner
                int roundWinner = winner(player1, player2);
                
                // Output the winner
                switch (roundWinner) {
                    case 0:
                        p1Score++;
                        p2Score++;
                        cout << "It was a tie!\n";
                        break;
                    case 1:
                        p1Score++;
                        cout << "Player 1 wins! The score is " << p1Score << "-" << p2Score << endl;
                        break;
                    case 2:
                        p2Score++;
                        cout << "Player 2 wins! The score is " << p2Score << "-" << p1Score << endl;
                        break;
                }
            } else {
                break;
            }
        }
        
        cout << "The game has finished!\n";
        if (p1Score > p2Score ) {
            cout << "Player 1 takes it with a score of " << p1Score << "-" << p2Score << "!\n";
        } else {
            cout << "Player 2 takes it with a score of " << p2Score << "-" << p1Score << "!\n";
        }
        
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


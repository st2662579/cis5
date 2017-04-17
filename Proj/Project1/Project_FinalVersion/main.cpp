/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on April 16, 2017, 6:06 PM
 * Purpose:  Rock paper scissors
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float compare = 0.5; // the number that is used to determine if the matches are finished
const string intro = "Welcome to Rock, Paper, Scissors!\n";

//Function Prototypes

int convertInput(char input) {

    int conversion = static_cast<int>(input);
    
    switch (conversion) {
        case 82: // if the input is R
        case 114: // if the input is r
            return 1;
            break;
        case 80: // if the input is S
        case 112: // if the input is s
            return 2;
            break;
        case 83: // if the input is P
        case 115: // if the input is p
            return 3;
            break;
        default: // if the user input is anything else
            return 1; // default to rock
            break;
    }

}

int winner(int player1, int player2) {
    // Calculate the winner
    // 1 = rock, 2 = paper, 3 = scissors
    
    // Convert (char) R, P, S to (integer) 1, 2, 3 respectively
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
    
    // Declare variables
    
    bool playAgain = false; // if true, the loop will continue
    char repeat; // user input for settings playAgain to true or false
    char player1, player2; // user inputs for rock, paper or scissors
    
    while (player1 != 0 || player2 != 0) {
        player1 = 0;
        player2 = 0;
    }
  
    // Play the game
    do {
        
        // Read the number of matches played from a text file, increment it and output the number of matches played.
        int matches;
        {  
            std::ifstream in( "matchesPlayed.txt" );
            in >> matches;
         }
         matches++;
         {
            std::ofstream out( "matchesPlayed.txt" );
            out << matches;
         }
         
         cout << (matches - 1) << " matches have been played.\n";
        
        // Declare variables
        float p1Score = 0; // player1's score
        float p2Score = 0; // player2's score
        int bestOf = 3; // best out of how many matches will be played (3 or 5)
        
        // Introduction
        cout << intro;
        cout << "Rock beats scissors, paper beats rock, and scissors beats paper.\n";
        cout << "Best of how many games will be played? (3 or 5): ";
        
        // Determine how many games will be played
        cin >> bestOf; // user inputs if they want a best of 3 or best of 5
        bestOf = (bestOf == 5 ? 5 : 3); // if the input is 5 then it is a best of 5, otherwise it is a best of 3
        
        cout << endl << "A best of " << bestOf << " match! Let's begin.\n";
        
        // Loop until matches have finished
        for (int match=1; match <= bestOf; match = match + 1) { // create a loop for the number of matches
            // Check if a player has won
            
            // if the ratio becomes > 0.5, they win.
            float p1Ratio = p1Score / bestOf;
            float p2Ratio = p2Score / bestOf;
            
            if ((p1Ratio < 0.5) && (p2Ratio < 0.5)) { // check if a player has the best of 3 or best of 5
                
                cout << setprecision(2) << fixed;
                cout << "The ratio for player 1 is " << p1Ratio << endl
                        << "The ratio for player 2 is " << p2Ratio << endl;
                cout << setprecision(0) << fixed;
                
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
                        match--;
                        cout << "It was a tie!\n";
                        break;
                    case 1:
                        p1Score++;
                        cout << "Player 1 wins! The score is " << abs(p1Score) << "-" << abs(p2Score) << endl;
                        break;
                    case 2:
                        p2Score++;
                        cout << "Player 2 wins! The score is " << abs(p2Score) << "-" << abs(p1Score) << endl;
                        break;
                }
            } else {
                break;
            }
        }
        
        // Conclude
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


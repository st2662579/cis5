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

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    // Declare variables
    
    bool playAgain = false; // if true, the loop will continue
    char repeat; // user input for settings playAgain to true or false

    int number[19] = {0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};
    vector<vector<int> > cards;
    
    for (int colors = 1; colors<=4; colors++) {
        /*
         Red = 1;
         Green = 2;
         Yellow = 3;
         Blue = 4;
         */
        for (int n = 0; n<=19; n++) {
            vector<int> newCard(2);
            newCard.push_back(colors);
            newCard.push_back(number[n]);
            cards.push_back(newCard);
            newCard.clear();
        }
    }
    
    for (int i = 0; i<cards.size(); i++) {
        cout << cards[i][0] << " " << cards[i][1] << endl;
    }
    
    
    
   /*
    do {    
        
        // Ask the user if they want to play again.
        cout << "Play again? (Y/N)\n";
        cin >> repeat;
        if (repeat == 'Y' || repeat == 'y') {
            playAgain = true;
        } else {
            playAgain = false;
        }
    } while (playAgain == true);

    */
    return 0;
}
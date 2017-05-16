/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on May 14, 5:02 PM
 * Purpose:  Problem 5
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <time.h> // time
#include <stdlib.h> // rand, srand

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   
    //Declare variables
    int lottery[5];
    int user[5];
    int matching = 0;
    
    for (int num = 0; num < 5; num++) {
        srand(time(NULL));
        lottery[num] = rand() % 10;
        cout << "Enter a number between 0 and 9: ";
        cin >> user[num];
        cout << endl;
    }
    
    for (int i = 0; i < 5; i++) {
        if (lottery[i] == user[i]) {
            matching++;
        }
    }
    
    cout << "The lottery numbers are: " << lottery[0] << lottery[1] << lottery[2] << lottery[3] << lottery[4] << endl;
    
    cout << "There were " << matching << " matching digits.\n";
    if (matching == 5) {
        cout << "You are a grand prize winner!";
    }
    
    //Exit stage right!
    return 0;
}
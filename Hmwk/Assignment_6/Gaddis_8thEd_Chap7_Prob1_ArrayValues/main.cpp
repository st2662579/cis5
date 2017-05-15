/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on May 14, 4:07 PM
 * Purpose:  Problem 1
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   
    //Declare variables
    int values[10];
    int highest = 0;
    int lowest = 0;
    
    for (int i = 0; i<10; i++) {
        int thisValue;
        cout << "Enter an integer to be inserted to the array: ";
        cin >> thisValue;
        values[i] = thisValue;
        if (thisValue > highest) {
            highest = thisValue;
        } else if (thisValue < lowest) {
            lowest = thisValue;
        }
        cout << endl;
    }
    
    cout << "The highest value was " << highest << " and the lowest value was " << lowest << endl;
    
    //Exit stage right!
    return 0;
}
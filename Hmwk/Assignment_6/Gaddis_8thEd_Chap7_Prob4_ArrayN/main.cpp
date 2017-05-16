/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on May 14, 4:45 PM
 * Purpose:  Problem 4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string> // String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void greaterNumbers(int array[], int arraySize, int n) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] > n) {
            cout << endl << array[i] << " is greater than " << n;
        }
    }
}

//Execution begins here
int main(int argc, char** argv) {
   
    //Declare variables
    int n;
    int size = 5;
    int array[size] = {1, 5, 50, 250, 500};
    cout << "Enter a number n: ";
    cin >> n;
    greaterNumbers(array, size, n);
    
    //Exit stage right!
    return 0;
}
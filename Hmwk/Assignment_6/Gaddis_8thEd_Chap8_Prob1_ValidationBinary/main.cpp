/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on May 14, 6:02 PM
 * Purpose:  Problem 6
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

int searchList(int [], int, int);

//Execution begins here
int main(int argc, char** argv) {
   
    //Declare variables
    int validNums[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int userNum = 0;
    int search;
    bool valid = false;
    
    cout << "Enter an account number: ";
    cin >> userNum;
    
    search = searchList(validNums, 18, userNum);
    
    cout << "\nThis number is " << (valid != -1 ? "valid" : "invalid") << "!\n";
    
    //Exit stage right!
    return 0;
}

int searchList(int array[], int size, int value) {
    int first = 0,
            last = size - 1,
            middle,
            position = -1;
    bool found = false;
    
    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (array[middle] == value) {
            found = true;
            position = middle;
        } else if (array[middle] > value) {
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return position;
}
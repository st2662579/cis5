/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on May 14, 4:15 PM
 * Purpose:  Problem 2
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip> // Format library
#include <string> // String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   
    //Declare variables
    float rainfall[12];
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    float averageRain;
    float totalRain = 0;
    int highest = 0;
    int lowest = 0;
    
    for (int month = 0; month < 12; month++) {
        int thisValue;
        cout << "Enter the rainfall for " << months[month] << ": ";
        cin >> thisValue;
        if (thisValue < 0) {
            cout << "\nThe number can't be negative. Try again.\n";
            month--;
        } else {
            cout << endl;
            rainfall[month] = thisValue;
            if (thisValue < rainfall[lowest]) {
                lowest = month;
            } else if (thisValue > rainfall[highest]) {
                highest = month;
            }
            totalRain = totalRain + thisValue;
        }
    }
    
    averageRain = totalRain / 12;
    
    cout << "Total rainfall this year: " << fixed << setprecision(1) << totalRain << "in" << endl;
    cout << "Average monthly rainfall: " << fixed << setprecision(1) << averageRain << "in" << endl;
    cout << "Highest month of rainfall: " << months[highest] << " with " << rainfall[highest] << "in" << endl;
    cout << "Lowest month of rainfall: " << months[lowest] << " with " << rainfall[lowest] << "in" << endl;
    
    //Exit stage right!
    return 0;
}
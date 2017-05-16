/* 
 * File:   main.cpp
 * Author: Seth Tyler
 * Created on May 14, 4:31 PM
 * Purpose:  Problem 3
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string> // String Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   
    //Declare variables
    int highest = 0;
    int lowest = 0;
    int jarsSold[5];
    int totalSales = 0;
    string salsas[5] = {"Mild", "Medium", "Sweet", "Hot", "Zetsy"};
    
    for (int salsa = 0; salsa < 5; salsa++) {
        int thisValue;
        cout << "Enter the amount of jars sold for the salsa " << salsas[salsa] << ": ";
        cin >> thisValue;
        if (thisValue < 0) {
            salsa--;
            cout << "\nPlease enter a positive value and try again.\n";
        } else {
            jarsSold[salsa] = thisValue;
            if (thisValue > jarsSold[highest]) {
                highest = salsa;
            } else if (thisValue < jarsSold[lowest]) {
                lowest = salsa;
            }
            cout << endl;
        }
    }
    
    for (int salsa = 0; salsa < 5; salsa++) {
        cout << "Total sales for " << salsas[salsa] << ": " << jarsSold[salsa] << endl;
        totalSales = totalSales + jarsSold[salsa];
    }
    
    cout << "Total sales: " << totalSales << endl;
    cout << "Best selling salsa: " << salsas[highest] << endl;
    cout << "Lowest selling salsa: " << salsas[lowest] << endl;
    
    //Exit stage right!
    return 0;
}
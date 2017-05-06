/* 
 * File:   main.cpp
 * Author: Seth
 * Created on May 4, 2017, 1:14 PM
 * Purpose: Convert feet + inches to meters + centimeters
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes


//Execution begins here
# include <iostream>
using namespace std;

void input(double &feet, double &inches);
void conversion (double feet, double &inches, int &meters, double &centimeters);//prototype
void output(int meters, double centimeters);   //prototype

int main() { //Input Function
    int meters;
    double feet, inches, centimeters;
    char menu;
    
    do {
        input(feet, inches);
        conversion(feet, inches, meters, centimeters);
        output(meters, centimeters);
        cout << "Continue?(Y/N): ";
        cin >> menu;
    } while (menu == 'Y' || menu == 'y');
    
    return 0;
}

void input(double &feet, double &inches) {
    cout << "Enter number of feet: ";
    cin >> feet;
    cout << "\nEnter number of inches: ";
    cin >> inches;
}

void conversion(double feet, double &inches, int &meters, double &centimeters) {
    inches += 12 * feet;
    centimeters = inches * 2.54;
    meters = centimeters / 100;
    centimeters -= meters * 100;
}

void output(int meters, double centimeters) {
    cout << endl << meters << " meter(s) and " << centimeters << " cm\n";
}
 
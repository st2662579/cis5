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
void conversion (int &feet, double &inches, double &meters, double &centimeters);//prototype
void output(int meters, double centimeters);   //prototype

int main() { //Input Function
    int feet;
    double meters, inches, centimeters;
    char menu;
    
    do {
        input(meters, centimeters);
        conversion(feet, inches, meters, centimeters);
        output(feet, inches);
        cout << "Continue?(Y/N): ";
        cin >> menu;
    } while (menu == 'Y' || menu == 'y');
    
    return 0;
}

void input(double &meters, double &centimeters) {
    cout << "Enter number of meters: ";
    cin >> meters;
    cout << "\nEnter number of cm: ";
    cin >> centimeters;
}

void conversion(int &feet, double &inches, double &meters, double &centimeters) {
    centimeters += 100 * meters;
    inches = centimeters / 2.54;
    feet = inches / 12;
    inches -= feet * 12;
}

void output(int feet, double inches) {
    cout << endl << feet << " feet and " << inches << " in\n";
}
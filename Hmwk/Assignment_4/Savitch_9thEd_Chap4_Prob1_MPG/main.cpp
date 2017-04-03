/* 
 * File:   main.cpp
 * Author: Seth Tyler
 *
 * Created on April 3, 2017, 3:08 PM
 */

//System Libraries

#include <iostream>
using namespace std;

// Global Constants
const float litersPerGallon = 0.264179; 

float calculateMpg(float numLiters, float numMiles) {
    
    float gallons = numLiters / litersPerGallon;
    
    return (numMiles / gallons);
}

int main(int argc, char** argv) {
    
    char again;
    float litersConsumed, milesTraveled;
    
    do {
        cout << "This program will compute the miles per gallon of a car.\n";
        cout << "Enter the number of liters of gasoline consumed by your car: ";
        cin >> litersConsumed;
        cout << endl << "Now enter the number of miles traveled by your car: ";
        cin >> milesTraveled;
        cout << endl << "Your car got " << calculateMpg(litersConsumed, milesTraveled) << " miles per gallon.\n";
        cout << "Do another calculation? (Y/N)\n";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}
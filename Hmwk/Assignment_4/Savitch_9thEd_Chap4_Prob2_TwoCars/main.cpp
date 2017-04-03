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
    float litersConsumed1, milesTraveled1;
    float litersConsumed2, milesTraveled2;
    float car1mpg, car2mpg;
    
    do {
        cout << "This program will compute the miles per gallon of two cars.\n";
        cout << "Enter the number of liters of gasoline consumed by the first car: ";
        cin >> litersConsumed1;
        cout << endl << "Now enter the number of miles traveled by the first car: ";
        cin >> milesTraveled1;
        cout << endl << "Enter the number of liters of gasoline consumed by the second car: ";
        cin >> litersConsumed2;
        cout << endl << "Now enter the number of miles traveled by the second car: ";
        cin >> milesTraveled2;
        car1mpg = calculateMpg(litersConsumed1, milesTraveled1);
        car2mpg = calculateMpg(litersConsumed2, milesTraveled2);
        cout << endl << "First car: " << car1mpg << " MPG\n";
        cout << "Second car: " << car2mpg << " MPG\n";
        cout << (car1mpg > car2mpg ? "The first car" : "The second car") << " has better fuel efficiency.\n";
        cout << "Do another calculation? (Y/N)\n";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}
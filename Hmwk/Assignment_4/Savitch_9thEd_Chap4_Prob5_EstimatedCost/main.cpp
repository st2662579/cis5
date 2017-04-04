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

float inflationRate(float priceNow, float priceYearAgo) {
    return (priceNow - priceYearAgo) / priceYearAgo;
}

float estimatedCost(float inflationRate, float price) {
    return (inflationRate * price);
}

int main(int argc, char** argv) {
    
    char again;
    float priceYearAgo, priceNow;
    
    do {
        cout << "Enter the price of an item one year ago:\n";
        cin >> priceYearAgo;
        cout << "Now enter the price of the item today:\n";
        cin >> priceNow;
        cout << "The inflation rate is " << inflationRate(priceNow, priceYearAgo) << "%\n";
        cout << "The cost of this item in one year is estimated to be $" << estimatedCost(inflationRate(priceNow, priceYearAgo), priceNow) << endl;
        cout << "Do another calculation? (Y/N):\n";
        cin >> again;
        
    } while (again == 'Y' || again == 'y');

    return 0;
}
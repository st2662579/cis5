/*
 
 * Author: Seth Tyler
 * Email Address: styler5@student.rcc.edu
 * Assignment Number: 2
 * Description: Calculate the volume of a sphere.
 * Last Changed: March 10, 2017
 
*/

#include <iostream>

using namespace std;

int main() {

    float radius, volume; // cm, cubic centimeters
    
    cout << "Enter radius of a sphere in cm." << endl;
    cin >> radius;
    
    volume = (4 / 3) * 3.1415 * radius * radius * radius; // Computes the volume of the sphere.
    
    cout << "The volume is " << volume << " cubic centimeters.\n";
    
    return 0;
}


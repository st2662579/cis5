/* 
 * File:   main.cpp
 * Author: Seth Tyler
 *
 * Created on April 3, 2017, 3:08 PM
 */

//System Libraries

#include <iostream>
using namespace std;

int main() {

    double max(double n1, double n2) { 
        double temp = n1; 
        if (n2 > temp) 
        { 
            temp = n2; 
        } 
        return temp; 
    } 

    double max (double n1, double n2, double n3) { 
        double temp = n1; 
        if (n2 > temp) 
        { 
            temp = n2; 
        } 
        if(n3 > temp) 
        { 
            temp = n3; 
        } 
        return temp; 
    }

    return 0;

}
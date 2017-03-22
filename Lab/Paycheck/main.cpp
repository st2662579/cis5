/* 
 * File:   main.cpp
 * Author: Seth Tyler
 *
 * Created on March 22, 2017, 1:04 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int payRate;
    int hrsWrkd;
    
    cout << "Enter your pay per hour: ";
    cin >> payRate;
    cout << endl << "Enter your hours worked: ";
    cin >> hrsWrkd;
    
    int overTime = (hrsWrkd - 40);
    int extra = 0;
    if (overTime > 0) {
        extra = overTime * (payRate * 2);
    }
    
    cout << endl << overTime << extra;
    
    cout << endl << "Your paycheck will be $" << ((payRate * (hrsWrkd > 40 ? 40 : hrsWrkd)) + extra);
    
    return 0;
}


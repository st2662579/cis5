/* 
 * File:   main.cpp
 * Author: Seth Tyler
 *
 * Created on April 3, 2017, 3:08 PM
 */

//System Libraries

#include <iostream> 
using namespace std; 

double calculate (double initial_balance,double rate,int months); 

int main() 
{ 
    double initial_balance, rate; 
    int months; 
    char choice; 
    do 
    { 
        cout << "Please enter your initial balance: \n"; 
        cin >> initial_balance; 
        cout << "Please enter the monthly interest rate(in percent form): \n"; 
        cin >> rate; 
        cout << "Please enter the number of months the bill has ran: \n"; 
        cin >> months; 
        cout << "Interest: $" << (calculate(initial_balance,rate,months) - initial_balance) << endl; 
        cout << "Total: $" << calculate(initial_balance,rate,months) << endl; 

        cout << " \n Would you like to repeat the calculations? (Y/N) \n";
        cin >> choice; 

    } while(choice=='y'||choice=='Y'); 

    return 0; 
} 

double calculate(double initial_balance, double rate, int months) 
{ 
    for (months;months > 0;months--) 
    { 
    initial_balance += (initial_balance * (rate/100)); 
    } 
    return (initial_balance); 
}
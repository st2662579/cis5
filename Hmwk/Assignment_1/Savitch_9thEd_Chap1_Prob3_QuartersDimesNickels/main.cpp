#include <iostream>
using namespace std;
int main()
{

    int quarters, dimes, nickels, sum;
    
    cout << "Enter a number of quarters:\n";
    cin >> quarters;
    cout << "Enter a number of dimes:\n";
    cin >> dimes;
    cout << "Enter a number of nickels:\n";
    cin >> nickels;
    
    sum = (quarters * 25) + (dimes * 10) + (nickels * 5);
    
    cout << "Your total amount is " << sum << " cents.\n";
   
    return 0;
}
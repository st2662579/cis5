#include <iostream>
using namespace std;
int main()
{
    int integer1, integer2, sum;
    
    cout << "Enter an integer.\n";
    cin >> integer1;
    cout << "Enter another integer.\n";
    cin >> integer2;
    
    sum = integer1 + integer2;
    
    cout << "The sum of these integers is " << sum << ".\n";
    
    cout << "This is the end of the program.\n";
    
    return 0;
}
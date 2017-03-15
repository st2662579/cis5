#include <iostream>
using namespace std;
int main()
{
    int time;
    
    cout << "Enter a time for an object to fall (in seconds):\n";
    cin >> time;
    cout << "The object would fall " << ((32 * (time)^2)/2) << " feet.\n";
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int width, height, totalLength;
    
    cout << "Hello\n";
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the width:\n";
    cin >> width;
    cout << "Enter the height:\n";
    cin >> height;
    
    totalLength = width * height;
    
    cout << "If you have ";
    cout << width;
    cout << " width ";
    cout << "and ";
    cout << height;
    cout << " height, then\n";
    cout << "you have ";
    cout << totalLength;
    cout << " total length.\n";
    
    cout << "Good-bye\n";
    
    return 0;
}
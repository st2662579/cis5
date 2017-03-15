#include <iostream>
using namespace std;
int main()
{
    char letter;
    
    cout << "Enter a letter to make a drawing:\n";
    cin >> letter;
    cout << "  " << letter << " " << letter << " " << letter << "\n";
    cout << " " << letter << "    " << letter << "\n";
    cout << letter << "\n";
    cout << letter << "\n";
    cout << letter << "\n";
    cout << letter << "\n";
    cout << letter << "\n";
    cout << " " << letter << "    " << letter << "\n";
    cout << "  " << letter << " " << letter << " " << letter << "\n";
    
    return 0;
}
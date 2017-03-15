#include <iostream>

using namespace std;

int main() {

    float mph, conversion, minutes, seconds;
    
    cout << "Enter a speed in mph to convert to minutes and seconds per mile: ";
    cin >> mph;
    
    conversion = (1/mph) * 60;
    minutes = static_cast<int>(conversion);
    seconds = static_cast<int>((conversion - minutes) * 60);
    
    cout << "The pace is " << minutes << " minute(s) and " << seconds << " second(s) per mile.";
    
    cout << endl;
   
    
    return 0;
}


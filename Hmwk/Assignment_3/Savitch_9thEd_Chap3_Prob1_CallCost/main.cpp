#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int time;
    string day;
    int callDuration;
    float rate;
    float cost;
    
    cout << "Enter the time in 24 hour time as an integer:\n";
    cin >> time;
    cout << "Enter the day of the week: (Mo, Tu, We, Th, Fr, Sa, Su):\n";
    cin >> day;
    cout << "Enter the length of the call as an integer.\n";
    cin >> callDuration;
    
    if ((time >= 800 && time <= 1800) && (day != "Sa" && day != "Su")) {
        rate = 0.4;
    } else if ((time < 800 || time > 1800) && (day != "Sa" && day != "Su")) {
        rate = 0.25;
    } else {
        rate = 0.15;
    }
    
    cost = rate * callDuration;
    
    cout << "Your cost is $" << cost << endl;
    
    return(0);

}
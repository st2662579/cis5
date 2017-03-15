#include <iostream>

using namespace std;

int main() {

    int exercises;
    float totalPoints = 0;
    float totalPossible = 0;
    int iEx;
    
    cout << "How many exercies to input?: ";
    cin >> exercises;
    
    for (iEx = 1; iEx <= exercises; iEx = iEx + 1) {
        int score, possible;
        cout << endl << "Score received for exercise " << iEx << ": ";
        cin >> score;
        cout << endl << "Total points possible for exercise " << iEx << ": ";
        cin >> possible;
        totalPoints = totalPoints + score;
        totalPossible = totalPossible + possible; 
        cout << endl;
    }
    
    float percentage = (totalPoints / totalPossible) * 100;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Your total is " << totalPoints << " out of " << totalPossible << ", or " << percentage <<  "%";
    cout << endl;
    
    return 0;
}


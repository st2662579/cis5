#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string instructorName, yourName, food, numberRange, adjective, color, animal;
    
    cout << "Enter the first or last name of your instructor: ";
    cin >> instructorName;
    cout << endl << "Enter your name: ";
    cin >> yourName;
    cout << endl << "Enter a food: ";
    cin >> food;
    cout << endl << "Enter a number between 100 and 120: ";
    cin >> numberRange;
    cout << endl << "Enter an adjective: ";
    cin >> adjective;
    cout << endl << "Enter a color: ";
    cin >> color;
    cout << endl << "Enter an animal: ";
    cin >> animal;
    
    cout << endl
            << "Dear Instructor " << instructorName << endl
            << "I am sorry that I am unable to turn in my homework at this time. "
            << "First, I ate a rotten " << food << ", which made me turn " << color
            << " and extremely ill. I came down with a fever of " << numberRange << ". "
            << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the "
            << food << " on my homework, because he ate it. I am currently rewriting my "
            << "homework and hope you will accept it late.\n"
            << "Sincerely, \n" << yourName;
    
    return 0;
}


#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int day, month;
    char done;
    bool cusp = false;
    
    do {
        
        cout << "Type in your birthday month. (1-12)\n";
        cin >> month;
        cout << "Type in your birthday day.\n";
        cin >> day;
        
        if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
            cusp = (month == 3 && day <= 22) || (month == 4 && day >= 18);
            cout << "You are an Aries.\n";
            cout << "You are a FIRE element.\n";
        } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
            cusp = (month == 4 && day <= 21) || (month == 5 && day >= 19);
            cout << "You are a Taurus.\n";
            cout << "You are an EARTH element.\n";
        } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
            cusp = (month == 5 && day <= 22) || (month == 6 && day >= 20);
            cout << "You are a Gemini.\n";
            cout << "You are an AIR element.\n";
        } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) { 
            cusp = (month == 6 && day <= 22) || (month == 7 && day >= 21);
            cout << "You are a Cancer.\n";
            cout << "You are a WATER element.\n";
        } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
            cusp = (month == 7 && day <= 24) || (month == 8 && day >= 21);
            cout << "You are a Leo.\n";
            cout << "You are a FIRE element.\n";
        } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {  
            cusp = (month == 8 && day <= 24) || (month == 8 && day >= 21);
            cout << "You are a Virgo.\n";
            cout << "You are an EARTH element.\n";
        } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
            cusp = (month == 9 && day <= 24) || (month == 10 && day >= 21);
            cout << "You are a Libra.\n";
            cout << "You are an AIR element.\n";
        } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
            cusp = (month == 10 && day <= 24) || (month == 11 && day >= 20);
            cout << "You are a Scorpio.\n";
               cout << "You are a WATER element.\n";
        } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
            cusp = (month == 11 && day <= 23) || (month == 12 && day >= 20);
            cout << "You are a Sagittarius.\n";
            cout << "You are a FIRE element.\n";
        } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) { 
            cusp = (month == 12 && day <= 23) || (month == 1 && day >= 18);
            cout << "You are a Capricorn.\n";
            cout << "You are an EARTH element.\n";
        } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
            cusp = (month == 1 && day <= 21) || (month == 1 && day >= 17);
            cout << "You are an Aquarius.\n";
            cout << "You are an AIR element.\n";
        } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
            cusp = (month == 2 && day <= 20) || (month == 3 && day >= 19);
            cout << "You are a Pisces.\n";
            cout << "You are a WATER element.\n";
        }
        
        cout << (cusp ? "You are on the cusp of another sign.\n" : "\n");
        
        cout << "Are you done? (Y/N)\n";
        cin >> done;
        
    } while (done != 'Y' && done != 'y');
    
    return 0;
}


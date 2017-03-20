#include <iostream>
using namespace std;

int main() {
    
    char player1Input, player2Input;
    
    do {
        cout << "Enter Rock (R), Paper (P) or (S) for player 1.\n";
        cin >> player1Input;
        cout << endl << "Enter Rock (R), Paper (P) or (S) for player 2.\n";
        cin >> player2Input;
        cout << endl;
        
        if (player1Input == 'R' || player1Input == 'r') {
            if (player2Input == 'R' || player2Input == 'r') {
                cout << "Nobody wins.\n";
            } else if (player2Input == 'P' || player2Input == 'p') {
                cout << "Player 2 wins. Paper covers rock.\n"; 
            } else if (player2Input == 'S' || player2Input == 's') {
                cout << "Player 1 wins. Rock breaks scissors.\n";
            }
        } else if (player1Input == 'P' || player1Input == 'p') {
            if (player2Input == 'R' || player2Input == 'r') {
                cout << "Player 1 wins. Paper covers rock.\n";
            } else if (player2Input == 'P' || player2Input == 'p') {
                cout << "Nobody wins.\n"; 
            } else if (player2Input == 'S' || player2Input == 's') {
                cout << "Player 2 wins. Scissors cut paper.\n";
            }
        } else if (player1Input == 'S' || player1Input == 's') {
            if (player2Input == 'R' || player2Input == 'r') {
                cout << "Player 2 wins. Rock breaks scissors.\n";
            } else if (player2Input == 'P' || player2Input == 'p') {
                cout << "Player 1 wins. Scissors cut paper.\n"; 
            } else if (player2Input == 'S' || player2Input == 's') {
                cout << "Nobody wins.\n";
            } 
        }
    } while (true); 
    
    return 0;
}


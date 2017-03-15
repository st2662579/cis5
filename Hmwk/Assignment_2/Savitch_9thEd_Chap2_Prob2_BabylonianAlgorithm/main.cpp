#include <iostream>

using namespace std;

int main() {

    float n, guess, r, answer;
    int count(10);
    
    cout << "Enter a number to compute the square root of: ";
    cin >> n;
    cout << endl << "Now enter a \"guess\" number to divide by: ";
    cin >> guess;
    
    r = n/guess;
    guess = (guess + r)/2;

    while (count > 0) {
        r = n/guess;
        guess = (guess + r)/2;

        if (guess <= (guess * 0.01) + guess)
            answer = guess;
        else
            r = n/guess;
            guess = (guess + r)/2;
            
        count-=1;
    }


    cout << "The square root of " << n << " is " << answer << ".";
    cout << endl;
         
    return 0;
}


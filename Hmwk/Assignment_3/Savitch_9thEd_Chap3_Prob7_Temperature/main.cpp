#include <iostream>
using namespace std;

int main() {

    int fahrenheit = 0;
    int celcius = 100;
    while ((celcius + 1) != fahrenheit) {
        fahrenheit = ((9 * celcius) / 5) + 32;
        cout << celcius << " degrees celcius. Fahrenheit: " << fahrenheit << " degrees.\n";
        celcius--;
    }
    return 0;
}


#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int startTemperature, endTemperature;
    
    cout << "Enter a starting temperature in degrees. (integer): ";
    cin >> startTemperature;
    cout << endl << "Enter an ending temperature in degrees. (integer): ";
    cin >> endTemperature;
    
    for (int temperature = startTemperature; temperature <= endTemperature; temperature = temperature + 1) {
        float velocity = 331.3 + 0.61 * temperature;
        cout << "At " << temperature << " degrees, " << " the velocity of sound is " << velocity << " m/s.\n";
    }
   
    
    return 0;
}


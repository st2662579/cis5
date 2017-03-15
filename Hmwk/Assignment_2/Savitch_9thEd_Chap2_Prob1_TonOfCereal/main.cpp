#include <iostream>

using namespace std;

int main() {

    float ton = 35273.92;
    
    cout << "Enter the weight of a package of breakfast cereal in ounces:\n";
    
    while (true) {
    
        float cerealWeight;

        cin >> cerealWeight;
        cout << "You will need " << (ton / cerealWeight) << " boxes of this breakfast cereal in order to get 1 metric ton of cereal.\n";
        cout << "Enter another weight:\n";
        
    }
    
    
    
    return 0;
}


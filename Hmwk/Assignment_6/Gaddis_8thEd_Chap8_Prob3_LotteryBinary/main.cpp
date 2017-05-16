#include <iostream>
using namespace std;

// Function Prototypes
int searchList(int [], int, int);

int main() {
	const int nums = 10;
	int picks[nums] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

	int winNums, search;

	cout << "Enter this week’s winning five-digit number: ";
	cin >> winNums;

	search = searchList(picks, nums, winNums);

	if (search == -1) {
            cout << "Sorry, no winning ticket this week.\n";
	} else {
            cout << "Congratulations!\nYou have the winning five-digit number: " << picks[search] << endl;
	}

	return 0;
}

int searchList(int array[], int size, int value) {
    int first = 0,
            last = size - 1,
            middle,
            position = -1;
    bool found = false;
    
    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (array[middle] == value) {
            found = true;
            position = middle;
        } else if (array[middle] > value) {
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return position;
}
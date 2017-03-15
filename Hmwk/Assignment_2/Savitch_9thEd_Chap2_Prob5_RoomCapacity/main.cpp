#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int number;
    int roomcapacity;
    char choice ;

    do {
        cout << "Enter the room capacity :";
        cin >> roomcapacity;
        cout << endl << "Enter number of people in the meeting :";
        cin >> number;


        if (number <= roomcapacity)
            cout << "You can hold the meeting legally!";
        else
            cout <<"Warning! you can't hold the meeting. But if you still want to hold the meeting you have to exclude: " << (number - roomcapacity) << " guest(s)"; 

        cout << endl << "Do you want to run the program again? y/n ";
        cin >> choice;
        cout << endl;
    } while ( choice =='y' || choice == 'Y');

    cout << endl;
    
    return 0;
}
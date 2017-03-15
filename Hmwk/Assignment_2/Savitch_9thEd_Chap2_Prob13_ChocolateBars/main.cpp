#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {

    char sex;                 //M or F
    unsigned short height,weight,age; //height(in), weight(lbs), age(yrs)
    unsigned char candyCals=230; //Candy bar calories
    float bmr; //Basic Metabolic Rate (calories)
    int candyBars; //Number of candy bars we can eat
 
    //Input data
    cout << "This program calculates the number of ";
    cout << "candy bars allowed per day based upon your BMR" << endl;
    cout << "Enter your sex, (M/F), weight (lbs), height (in), age (years)" << endl;
    cout << "Inputs are integer based" << endl;
    cin >> sex >> weight >> height >> age;
    
    //Map inputs to outputs or process the data
    bmr=(sex=='M')?
         66 + 6.3f*weight + 12.9f*height - 6.8f*age:
        655 + 4.3f*weight +  4.7f*height - 4.7f*age;
    candyBars = static_cast<int>(bmr/candyCals);
    
    //Output the transformed data
    cout << "The number of candy bars you can eat = " << candyBars << endl;
    
    //Exit stage right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Seth Tyler
 *
 * Created on April 3, 2017, 3:55 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//function call
double price_per(int whole, int numer, int denom, int total_shares);

//main program
int main()
{
    char loop;

    do
    {
        //gathers input
        int number_of_shares, whole_value, numerator, denominator;
        double price_per_share;
        cout << "Enter the number of shares you own: ";
        cin >> number_of_shares;
        cout << endl << "Enter the value of your shares, first the whole value: ";
        cin >> whole_value;
        cout << endl << "Now enter the numerator: ";
        cin >> numerator;
        cout << endl << "Now the denominator: ";
        cin >> denominator;

        price_per_share = price_per(whole_value, numerator, denominator, number_of_shares);

        cout << endl << "The value of one share is: ";
        cout << setiosflags(ios::fixed) << setprecision(2) << price_per_share << endl;
        cout << endl << "Enter Y to continue or N to exit: ";
        cin >> loop;

    } while (loop == 'Y' || loop == 'y');

}
//function definition
double price_per(int whole, int numer, int denom, int total_shares)
{
    double whole_denom_numer, last;

    whole_denom_numer = (((whole*denom)+numer)/denom);
    last = whole_denom_numer/total_shares;
    return last;
}
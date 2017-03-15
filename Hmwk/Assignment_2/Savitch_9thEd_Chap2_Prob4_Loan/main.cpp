#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes

//Execution begins here
int main() {
    
    const float percent=100.0f; //Percent conversion
    const float yearToMonth=12.0f; //Year to month conversion    
    
    //Declare variables
    float faceVal,//Loan face value $;s
          consRec,//What the consumer receives $'s
          mthPay; //Monthly Payment $'s
    int   intRate,//Yearly percentage interest Rate
          nMonths;//Number of months in the loan
    
    //Input data
    cout << "This program calculates Loan Parameters" << endl;
    cout << endl << "Input the loan amount to be received $";
    cin >> consRec;
    cout << "Number of months in the loan " << endl;
    cin >> nMonths;
    cout << "Interest rate % = ";
    cin >> intRate;
    
    faceVal=consRec/(1-intRate/percent/yearToMonth * nMonths);
    mthPay=faceVal/nMonths;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Face Value of the Loan = $"<<faceVal<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;
    
    return 0;
}
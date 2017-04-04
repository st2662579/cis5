/* 
 * File:   main.cpp
 * Author: Seth Tyler
 *
 * Created on April 3, 2017, 3:08 PM
 */

//System Libraries

#include <iostream> 
using namespace std; 

int main()

{
	double G, F, m1,m2,d,gravity;
        char again;	

	//G= 6.673.10-8 dyne.cm2/g2
	gravity=(6.673e-08);

	do	
	{
            cout<<"Give the distance between the masses  d=";
            cin>>d;	
            cout<<endl;

            cout<<"Give the mass for the first object m1=";
            cin>>m1;	
            cout<<endl;

            cout<<"Give the mass for the second object m2= ";
            cin>>m2;
            cout<<endl;		

            F=((gravity*m1*m2)/(d*d));
            cout<<"F = "<<F<<endl;

            cout<<"Calculate again for other values? (Y/N)" << endl;
            cin>>again;

	}

	while (again == 'Y' || again == 'y');

	return 0;
}
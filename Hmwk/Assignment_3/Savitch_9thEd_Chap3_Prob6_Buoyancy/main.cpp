#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
double sphere_volume (double);
double buoy_force (double,double);

int main ()
{

    double rad,volume,force;
    double weight;
    double water = 62.4;
    cout << "~~Buoyancy calculator~~" << endl;
    cout << "Please enter the radius of your sphere" << endl;
    cin >> rad;
    cout << "Please enter the weight of your sphere" << endl;
    cin >> weight;
    volume = sphere_volume(rad);
    force = buoy_force(volume, weight);
    cout << "The force of your sphere is "<<force<<endl;
    if (force <= water)
        cout << "Your sphere will float in the water"<<endl;
    else
        cout <<"Your sphere will sink :( "<<endl;
    return 0;
}
double sphere_volume (double radius)
{
    double vol;
    vol = ((4/3) * (M_PI) * (pow(radius,3)));
    return vol;
}
double buoy_force (double vol,double weight)
{
    double force;
    force = vol * weight;
    return force;
}
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    bool prime = true;

    for (int x = 3; x <= 100; x++)
    {
        prime = true;
        for (int y = 2; y <= (x - 1); y++)
        {
            if ((x % y) == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime == true)
            cout<<x<<endl;
   }

    getche();
    return 0;
}
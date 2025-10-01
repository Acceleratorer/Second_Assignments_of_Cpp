#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()  
{
    double a, b, c, delta,x1,x2;
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta < 0 || a == 0)    
        cout << "PTVN";
    else if (delta == 0)    
    {
         
        cout << "PT co nghiem kep: x1 = x2 = " << (-b / (2 * a));
    }
    else    
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "PT co hai nghiem phan biet:" << endl << "x1 = " << x1 << endl << "x2 = " << x2;        
    }
    
}
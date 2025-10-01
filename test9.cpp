#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float a,b,c,P,S;
    cin >> a >> b >> c;
    P = ( a + b + c)/2;
    S = sqrt(P * (P - a) * (P - b) * (P - c));
    
    cout << fixed << setprecision(2);
    
    if ( a + b > c && b + c > a && a + c > b)
    {
        if ( a == b && a == c)
        {
            cout << "Tam giac deu, dien tich = " << S;
        }
        else if ( a == b || a == c || b == c)
        {
            cout << "Tam giac can, dien tich = " << S;
        }
        else if ( a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
        {
            cout << "Tam giac vuong, dien tich = " << S;
        }
        else
        {
            cout << "Tam giac thuong, dien tich = " << S;
        }
    }
    else
    {
        cout << "Khong phai tam giac";
    }
    return 0;
}
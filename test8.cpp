#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,DTB;
    cin >> a >> b >> c;
    DTB = (a+b+c)/3;
    cout.precision(2);
    
    
    if (DTB >= 9 && DTB <= 10)
    {
        cout << "DTB = " << DTB << endl << endl;
        cout << "Loai: XUAT SAC" << endl;
    }
    else if (DTB >= 8 && DTB < 9)
    {
        cout << "DTB = " << DTB << endl << endl;
        cout << "Loai: GIOI" << endl;
    }
    else if (DTB >= 7 && DTB < 8)
    {
        cout << "DTB = " << DTB << endl << endl;
        cout << "Loai: KHA" << endl;
    }
    else if (DTB >= 6 && DTB < 7)
    {
        cout << "DTB = " << DTB << endl << endl;
        cout << "Loai: TB KHA" << endl;
    }
    else if (DTB >= 5 && DTB < 6)
    {
        cout << "DTB = " << DTB << endl << endl;
        cout << "Loai: TB" << endl;
    }
    else if (DTB >= 4 && DTB < 5)
    {
        cout << "DTB: " << DTB << endl << endl;
        cout << "Loai: YEU" << endl;
    }
    else if ( DTB < 4)
    {
        cout << "DTB = " << DTB << endl << endl;
        cout << "Loai: KEM" << endl;
    }
    
    
    return 0;
}
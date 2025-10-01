#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a,b; cin>>a>>b;
    if ((a!=0) && (b!=0))
    {
        double c = -b/a;
        cout<<"{"<<c<<"}";
    }
    else if ((a==0) && (b!=0))
    {
        cout<<"Ø";
    }
    else if ((a==0) && (b==0))
    {
        cout<<"ℝ";
    }
}
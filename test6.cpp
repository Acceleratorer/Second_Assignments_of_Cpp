#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double arr[3] = {a, b, c};
    sort(arr, arr + 3);
    cout << arr[0]<<" " ;
    cout << arr[1]<<" " ;
    cout << arr[2] ;
    return 0;
}   
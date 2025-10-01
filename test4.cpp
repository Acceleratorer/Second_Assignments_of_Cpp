#include <iostream>
#include <cmath>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;
    double roundresult = round(a*n)/n;
    std::cout.precision(10);
    std::cout << roundresult<<std::endl;
    return 0;  
}
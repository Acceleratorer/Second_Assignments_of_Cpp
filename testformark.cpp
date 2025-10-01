#include <iostream>
#include <iomanip>
using namespace std;

double layLaiSuat(int thang) {
    if (thang == 1 || thang == 2) return 1.7;
    if (thang == 3) return 2.0;
    if (thang == 6) return 3.0;
    if (thang == 9) return 3.9;
    if (thang == 12) return 4.7;
    return -1; }

int main() {
    double soTienGui;
    int kyHan;
    cin >> soTienGui;
    cin >> kyHan;

    double soTienNhan = soTienGui;
    while (kyHan > 0) {
        int used = 0;
        if (kyHan >= 12) used = 12;
        else if (kyHan >= 9) used = 9;
        else if (kyHan >= 6) used = 6;
        else if (kyHan >= 3) used = 3;
        else used = kyHan; 

        double laiSuat = layLaiSuat(used);
        soTienNhan = soTienNhan * (1 + laiSuat/100);

        kyHan -= used;
    }

    cout<< fixed << setprecision(0) << soTienNhan << endl;
    return 0;
}
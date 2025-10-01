#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam;
    if (!(cin >> ngay >> thang >> nam)) return 0;

    if (nam <= 0) {
        cout << "Nam khong hop le.";
        return 0;
    }

    if (thang < 1 || thang > 12) {
        cout << "Thang khong hop le.";
        return 0;
    }

    if (ngay < 1) {
        cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
        return 0;
    }

    bool namNhuan = (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
    int soNgay;

    if (thang == 2) soNgay = namNhuan ? 29 : 28;
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) soNgay = 30;
    else soNgay = 31;

    if (ngay > soNgay) cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
    else cout << ngay << "/" << thang << "/" << nam << " la ngay hop le.";

    return 0;
}
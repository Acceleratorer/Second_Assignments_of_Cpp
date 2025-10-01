#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> b;
    cin >> op;

    switch(op) {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << a << " / " << b << " = " << (double)a / b << endl;
            else
                cout << "Loi: Khong the chia cho 0!" << endl;
            break;
        case '%':
            if (b != 0)
                cout << a << " % " << b << " = " << a % b << endl;
            else
                cout << "Loi: Khong the chia cho 0!" << endl;
            break;
        default:
            cout << "Phep toan khong hop le!" << endl;
    }

    return 0;
}
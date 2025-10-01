            #include <iostream>
            using namespace std;

            int main() {
                int soTien;
                cin >> soTien;

                int menhGia[] = {500, 200, 100, 50};
                int soTo[4] = {0};

                for (int i = 0; i < 4; i++) {
                    soTo[i] = soTien / menhGia[i];
                    soTien = soTien % menhGia[i];
                }
                for (int i = 0; i < 4; i++) {
                    cout << menhGia[i]<<" : " << soTo[i] << endl;
                }

                return 0;
            }
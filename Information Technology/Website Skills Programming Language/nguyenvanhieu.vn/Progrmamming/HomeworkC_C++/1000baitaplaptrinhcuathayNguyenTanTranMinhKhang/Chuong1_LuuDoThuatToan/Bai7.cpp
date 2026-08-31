#include <iostream>

using namespace std;

void nhap(int &n) {
    do {
        cout << "Nhap n (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap n > 0!" << endl;
        }
    } while (n <= 0);
}

double tinhTongPhanSo(int n) {
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += static_case(double) i / (i + 1);
    }
    return s;
}

void xuat(double s) {
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        nhap(n);
        double s = tinhTongPhanSo(n);
        xuat(s);
        // cin >> n;
        // float s = 0;
        // for (int i = 1; i <= n; i++) {
        //     s += (float) i / (i + 1);
        // }
        // cout << s << endl;
    }
    return 0;
}
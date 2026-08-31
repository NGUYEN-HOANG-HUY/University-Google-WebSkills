#include <iostream>

using namespace std;

void nhap(int &n) {
    cin >> n;
}

float tinhTongPhanSo(int n) {
    float s = 0;
    for (int i = 1; i <= n; i++) {
        s += (float)1.0 / (i * (i + 1));
    }
    return s;
}

void xuat(float s) {
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        nhap(n);
        float s = tinhTongPhanSo(n);
        xuat(s);
        // cin >> n;
        // float s = 0;
        // for (int i = 1; i <= n; i++) {
        //     s += (float)1.0 / (i * (i + 1));
        // }
        // cout << s << endl;
    }
    return 0;
}
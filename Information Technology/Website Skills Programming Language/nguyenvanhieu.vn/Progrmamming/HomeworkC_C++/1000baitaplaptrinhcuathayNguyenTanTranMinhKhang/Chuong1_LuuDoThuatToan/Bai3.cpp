//
// Created by ASUS on 12/23/2025.
//
#include <iostream>
#include <math.h>

using namespace std;

void nhap(int &n) {
    cin >> n;
}

float tinhTongPhanSo(int n) {
    float s = 0;
    for (int i = 1; i <= n; i++) {
        s += (float)1.0 / i;
    }
    return s;
}

void xuat(float s) {
    cout << s << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        // float s = 0;
        // cin >> n;
        // for (int i = 1; i <= n; i++) {
        //     s += (float)1.0 / i;
        // }
        // cout << s << endl;
        nhap(n);
        float s = tinhTongPhanSo(n);
        xuat(s);
    }
    return 0;
}
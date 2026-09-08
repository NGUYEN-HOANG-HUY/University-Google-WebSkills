//
// Created by ASUS on 9/8/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

void nhap(int &n, int &x) {
    do {
        cout << "Nhap n (n > 0); ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap n > 0!" << endl;
        }
    } while (n <= 0);
    cout << "Nhap x: ";
    cin >> x;
}

long long tinhTong(int n, int x) {
    long long S = 0;
    for (int i = 1; i <= n; i++) {
        S += pow(x, i);
    }
    return S;
}

void xuat(long long S) {
    cout << S << endl;
}

int main() {
    int t;
    cout << "Nhap so luong test cases: ";
    cin >> t;
    while (t--) {
        int n, x;
        nhap(n, x);
        long long S = tinhTong(n, x);
        xuat(S);
    }
    // int n, x;
    // nhap(n, x);
    // long long S = tinhTong(n, x);
    // xuat(S);
    // cin >> n >> x;
    // long long S = 0;
    // for (int i = 1; i <= n; i++) {
    //     S += pow(x, i);
    // }
    // cout << S << endl;
    return 0;
}
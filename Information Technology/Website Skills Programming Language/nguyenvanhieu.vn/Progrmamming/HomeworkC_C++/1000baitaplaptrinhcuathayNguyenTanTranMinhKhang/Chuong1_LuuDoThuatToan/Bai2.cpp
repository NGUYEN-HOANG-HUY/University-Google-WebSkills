//
// Created by ASUS on 12/23/2025.
//
#include <iostream>
#include <math.h>

using namespace std;

void nhap(int &n) {
    cin >> n;
}

int tinhTongBinhPhuong(int n) {
    int s = 0;
    for (int i = 1; i <=n; i++) {
        s += pow(i, 2);
    }
}

void xuat(int s) {
    cout << s << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, s = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            s += pow(i, 2);
        }
        cout << s << endl;
    }
    return 0;
}
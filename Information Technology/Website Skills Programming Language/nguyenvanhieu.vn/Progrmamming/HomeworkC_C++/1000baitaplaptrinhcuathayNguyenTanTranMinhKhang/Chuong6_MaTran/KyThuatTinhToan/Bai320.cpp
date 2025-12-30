//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

#define MAX 100
double TongSoDuong(double a[][100], int m, int n) {
    double tong = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0) {   // kiểm tra số dương
                tong += a[i][j];
            }
        }
    }

    return tong;
}

void NhapMaTran(double a[][MAX], int &m, int &n) {
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

double TongSoDuong(double a[][MAX], int m, int n);

int main() {
    double a[MAX][MAX];
    int m, n;

    NhapMaTran(a, m, n);

    double kq = TongSoDuong(a, m, n);
    cout << "\nTong cac so duong trong ma tran = " << kq;

    return 0;
}

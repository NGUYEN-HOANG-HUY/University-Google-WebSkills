//
// Created by ASUS on 12/8/2025.
//
int DemSoDuong(double a[][100], int m, int n) {
    int dem = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0) {   // kiểm tra số dương
                dem++;
            }
        }
    }

    return dem;
}

#include <iostream>
using namespace std;

#define MAX 100

void NhapMaTran(double a[][MAX], int &m, int &n) {
    cout << "Nhap so dong m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

int DemSoDuong(double a[][MAX], int m, int n);

int main() {
    double a[MAX][MAX];
    int m, n;

    NhapMaTran(a, m, n);

    int kq = DemSoDuong(a, m, n);
    cout << "\nSo luong so duong trong ma tran = " << kq;

    return 0;
}

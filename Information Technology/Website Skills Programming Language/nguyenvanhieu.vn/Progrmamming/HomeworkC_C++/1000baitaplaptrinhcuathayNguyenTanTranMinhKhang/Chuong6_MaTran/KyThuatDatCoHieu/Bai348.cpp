//
// Created by ASUS on 12/8/2025.
//
bool TonTaiSoDuong(double a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0) {
                return true;   // chỉ cần gặp 1 số dương → trả về true
            }
        }
    }
    return false; // không có số dương nào
}

#include <iostream>
using namespace std;

#define MAX 100

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

bool TonTaiSoDuong(double a[][MAX], int m, int n);

int main() {
    double a[MAX][MAX];
    int m, n;

    NhapMaTran(a, m, n);

    if (TonTaiSoDuong(a, m, n))
        cout << "\nMa tran CO ton tai so duong.";
    else
        cout << "\nMa tran KHONG co so duong.";

    return 0;
}

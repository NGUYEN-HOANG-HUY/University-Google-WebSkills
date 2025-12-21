//
// Created by ASUS on 12/8/2025.
//
void HoanViDong(int a[][100], int m, int n, int d1, int d2) {
    for (int j = 0; j < n; j++) {
        int temp = a[d1][j];
        a[d1][j] = a[d2][j];
        a[d2][j] = temp;
    }
}

#include <iostream>
using namespace std;

#define MAX 100

void NhapMaTran(int a[][MAX], int &m, int &n) {
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

void XuatMaTran(int a[][MAX], int m, int n) {
    cout << "\nMa tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void HoanViDong(int a[][MAX], int m, int n, int d1, int d2);

int main() {
    int a[MAX][MAX], m, n;

    NhapMaTran(a, m, n);

    int d1, d2;
    cout << "\nNhap dong 1 muon hoan vi: ";
    cin >> d1;
    cout << "Nhap dong 2 muon hoan vi: ";
    cin >> d2;

    HoanViDong(a, m, n, d1, d2);

    cout << "\nMa tran sau khi hoan vi:\n";
    XuatMaTran(a, m, n);

    return 0;
}

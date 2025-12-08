//
// Created by ASUS on 12/8/2025.
//
#include <iostream>

using namespace std;

void NhapMaTran(int a[][100], int &m, int &n) {
    cout << "Nhap so dong (m): ";
    cin >> m;
    cout << "Nhap so cot (n): ";
    cin >> n;

    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void XuatMaTran(int a[][100], int m, int n) {
    cout << "\nMa tran vua nhap:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

#include <iostream>
using namespace std;

#define MAX 100

void NhapMaTran(int a[][MAX], int &m, int &n);
void XuatMaTran(int a[][MAX], int m, int n);

int main() {
    int a[MAX][MAX];
    int m, n;

    NhapMaTran(a, m, n);
    XuatMaTran(a, m, n);

    return 0;
}

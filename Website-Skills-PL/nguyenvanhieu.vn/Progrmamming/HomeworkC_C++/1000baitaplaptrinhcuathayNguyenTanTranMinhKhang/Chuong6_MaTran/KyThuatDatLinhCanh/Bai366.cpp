//
// Created by ASUS on 12/8/2025.
//
int SoChanDauTien(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {   // kiểm tra số chẵn
                return a[i][j];
            }
        }
    }
    return -1; // không có số chẵn nào
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

int SoChanDauTien(int a[][MAX], int m, int n);

int main() {
    int a[MAX][MAX], m, n;

    NhapMaTran(a, m, n);

    int kq = SoChanDauTien(a, m, n);

    if (kq == -1)
        cout << "Khong co so chan trong ma tran.";
    else
        cout << "So chan dau tien la: " << kq;

    return 0;
}

//
// Created by ASUS on 12/8/2025.
//
void SapXepDongTangDan(int a[][100], int n, int d) {
    // n: số cột
    // d: chỉ số dòng cần sắp xếp (0-based)

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[d][i] > a[d][j]) {
                int temp = a[d][i];
                a[d][i] = a[d][j];
                a[d][j] = temp;
            }
        }
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

void SapXepDongTangDan(int a[][MAX], int n, int d);

int main() {
    int a[MAX][MAX], m, n;

    NhapMaTran(a, m, n);
    XuatMaTran(a, m, n);

    int dong;
    cout << "\nNhap dong muon sap xep: ";
    cin >> dong;

    SapXepDongTangDan(a, n, dong);

    cout << "\nMa tran sau khi sap xep dong " << dong << ":\n";
    XuatMaTran(a, m, n);

    return 0;
}

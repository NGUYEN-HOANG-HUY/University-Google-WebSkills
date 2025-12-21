//
// Created by ASUS on 12/8/2025.
//

#include <iostream>
#include <cmath>
using namespace std;

#define MAX 100

void NhapMaTran(int A[][MAX], int &m, int &n) {
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
}

void XuatMaTran(int A[][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void TaoMaTranB(int A[][MAX], int B[][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = abs(A[i][j]);
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX];
    int m, n;

    NhapMaTran(A, m, n);

    TaoMaTranB(A, B, m, n);

    cout << "\nMa tran B (gia tri tuyet doi):\n";
    XuatMaTran(B, m, n);

    return 0;
}

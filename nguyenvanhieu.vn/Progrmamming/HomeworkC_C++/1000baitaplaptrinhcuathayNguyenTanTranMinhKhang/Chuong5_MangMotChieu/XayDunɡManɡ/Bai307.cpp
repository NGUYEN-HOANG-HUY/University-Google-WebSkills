//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

void taoMangLe(int a[], int n, int b[], int &m) {
    m = 0; // số phần tử của mảng b

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {  // kiểm tra số lẻ
            b[m] = a[i];
            m++;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;

    int a[100], b[100];
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int m; // số phần tử của mảng b

    taoMangLe(a, n, b, m);

    cout << "Mang b (chi chua so le): ";
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }

    return 0;
}

//
// Created by ASUS on 12/8/2025.
//
#include <iostream>

using namespace std;
#define Max 100

#include <iostream>
using namespace std;

#define Max 100

void Input(int a[], int &n) {
    // Nhập số lượng phần tử
    do {
        cout << "Nhap so phan tu n: ";
        cin >> n;
        if (n <= 1 || n >= Max) {
            cout << "Khong hop le, vui long nhap lai!\n";
        }
    } while (n <= 1 || n >= Max);

    // Nhập từng phần tử
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Output(int a[], int n) {
    cout << "\nMang vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void OutputEven(int a[], int n) {
    cout << "Cac so chan trong mang: ";
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[Max], n;

    Input(a, n);
    Output(a, n);
    OutputEven(a, n);

    return 0;
}

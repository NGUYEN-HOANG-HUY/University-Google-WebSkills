//
// Created by ASUS on 12/8/2025.
//
#include <iostream>

using namespace std;
#define Max 100

void Intput(double a[], int &n) {
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

void Print(double a[], int n) {
    cout << "Mang vau nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void PrintThanSmall(double a[], int n) {
    double Min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < a[0])
            cout << a[i];
    }
    cout << endl;
}

int main() {
    double a[Max];
    int n;
    Intput(a, n);
    Print(a, n);
    PrintThanSmall(a, n);
    return 0;
}
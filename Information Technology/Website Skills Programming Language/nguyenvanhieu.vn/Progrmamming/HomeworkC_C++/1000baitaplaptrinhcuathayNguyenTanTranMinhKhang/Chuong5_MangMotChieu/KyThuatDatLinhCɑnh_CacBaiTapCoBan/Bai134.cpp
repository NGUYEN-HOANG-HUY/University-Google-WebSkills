//
// Created by ASUS on 12/8/2025.
//
#include <iostream>

using namespace std;
#define Max 100

void Intput(int a[], int &n) {
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
    cout << endl;
}

void Output(int a[], int n) {
    cout << "\nMang vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int MaxValues(int a[], int n) {
    int Max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > Max)
            cout << a[i];
    }
    cout << endl;
}


int main() {
    int a[Max], n;
    Intput(a, n);
    Output(a, n);
    MaxValues(a, n);
    return 0;
}
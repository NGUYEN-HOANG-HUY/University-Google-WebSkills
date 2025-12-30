//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

#define Max 100

void Input(int a[], int &n) {
    do {
        cout << "Nhap so luong phan tu: ";
        cin >> n;
        if (n <= 0 || n >= Max)
            cout << "Khong hop le, nhap lai!\n";
    } while (n <= 0 || n >= Max);

    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Output(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void InsertAtPosition(int a[], int &n, int x, int k) {
    if (k < 0 || k > n) {
        cout << "Vi tri khong hop le!\n";
        return;
    }

    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }

    a[k] = x;
    n++;
}

int main() {
    int a[Max], n;
    Input(a, n);

    int x, k;
    cout << "Nhap gia tri X can chen: ";
    cin >> x;

    cout << "Nhap vi tri k (0.." << n << "): ";
    cin >> k;

    InsertAtPosition(a, n, x, k);

    cout << "Mang sau khi chen: ";
    Output(a, n);

    return 0;
}

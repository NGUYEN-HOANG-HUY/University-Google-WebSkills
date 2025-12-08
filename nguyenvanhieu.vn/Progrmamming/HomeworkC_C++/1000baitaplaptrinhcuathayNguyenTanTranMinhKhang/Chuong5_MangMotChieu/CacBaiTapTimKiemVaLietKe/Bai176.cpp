//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

#define Max 100

void Input(double a[], int &n) {
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

void ListNegative(double a[], int n) {
    cout << "Cac so am trong mang: ";

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            cout << a[i] << " ";
            found = true;
        }
    }

    if (!found)
        cout << "Khong co so am nao.";

    cout << endl;
}

int main() {
    double a[Max];
    int n;

    Input(a, n);
    ListNegative(a, n);

    return 0;
}

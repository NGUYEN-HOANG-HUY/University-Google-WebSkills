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

double SumArray(double a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    double a[Max];
    int n;

    Input(a, n);

    cout << "Tong cac phan tu trong mang = " << SumArray(a, n) << endl;

    return 0;
}

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

void Output(double a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void SortAscending(double a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    double a[Max];
    int n;

    Input(a, n);

    cout << "\nMang truoc khi sap xep: ";
    Output(a, n);

    SortAscending(a, n);

    cout << "Mang sau khi sap xep tang dan: ";
    Output(a, n);

    return 0;
}

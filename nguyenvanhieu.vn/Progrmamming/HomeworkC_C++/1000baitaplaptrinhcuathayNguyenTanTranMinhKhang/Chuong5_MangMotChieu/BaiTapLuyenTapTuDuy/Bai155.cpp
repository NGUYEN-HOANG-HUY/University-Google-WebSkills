//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
#include <cmath>
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

double FindFarthest(double a[], int n, double X) {
    double farValue = a[0];
    double maxDistance = fabs(a[0] - X);

    for (int i = 1; i < n; i++) {
        double distance = fabs(a[i] - X);
        if (distance > maxDistance) {
            maxDistance = distance;
            farValue = a[i];
        }
    }
    return farValue;
}

int main() {
    double a[Max];
    int n;
    Input(a, n);

    double X;
    cout << "Nhap gia tri X: ";
    cin >> X;

    double result = FindFarthest(a, n, X);
    cout << "Gia tri xa X nhat la: " << result << endl;

    return 0;
}

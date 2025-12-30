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

int CountEven(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            count++;
    }
    return count;
}

int main() {
    int a[Max];
    int n;

    Input(a, n);

    cout << "So luong so chan trong mang = " << CountEven(a, n) << endl;

    return 0;
}

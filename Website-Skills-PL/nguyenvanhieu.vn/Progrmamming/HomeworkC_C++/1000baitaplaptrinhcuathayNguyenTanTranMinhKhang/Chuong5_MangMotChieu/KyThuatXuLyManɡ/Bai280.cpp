//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

void duaSo1VeDau(int a[], int n) {
    int b[100];
    int idx = 0;

    // Bước 1: đưa tất cả số 1 về đầu mảng
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            b[idx++] = 1;
        }
    }

    // Bước 2: đưa các số khác vào sau
    for (int i = 0; i < n; i++) {
        if (a[i] != 1) {
            b[idx++] = a[i];
        }
    }

    // Sao chép lại vào mảng ban đầu
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int a[100];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    duaSo1VeDau(a, n);

    cout << "Mang sau khi dua so 1 ve dau: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}

//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

void lietKeMangCon(int a[], int n) {
    cout << "Cac mang con:\n";

    // i: vị trí bắt đầu
    for (int i = 0; i < n; i++) {
        // j: vị trí kết thúc
        for (int j = i; j < n; j++) {

            // In mảng con từ i đến j
            cout << "[ ";
            for (int k = i; k <= j; k++) {
                cout << a[k] << " ";
            }
            cout << "]\n";
        }
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[100];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    lietKeMangCon(a, n);

    return 0;
}

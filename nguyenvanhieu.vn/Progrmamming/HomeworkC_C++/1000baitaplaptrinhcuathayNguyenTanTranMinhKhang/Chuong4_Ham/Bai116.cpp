//
// Created by ASUS on 12/8/2025.
//
#include <iostream>

using namespace std;

int TinhTong(int n) {
    cout << "Enter quantity: \n";
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += i;
    }
    return s;
}

int main() {
    int n;
    cout << "Tinh tong la " << TinhTong(n);
    return 0;
}

//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
#include <math.h>

using namespace std;

long long TinhTong(int n) {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    long long s = 0;
    cout << "Enter quantity: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s += pow(x, i);
    }
    return s;
}

int main() {
    int n;
    cout << TinhTong(n);
    return 0;
}

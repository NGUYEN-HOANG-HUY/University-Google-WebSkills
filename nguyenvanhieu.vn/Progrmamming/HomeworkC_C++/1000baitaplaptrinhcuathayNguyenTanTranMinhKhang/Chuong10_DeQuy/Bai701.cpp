//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

int Sum(int n) {
    if (n == 1)      // điều kiện dừng
        return 1;
    return n + Sum(n - 1);   // lời gọi đệ quy
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S(n) = " << Sum(n);
    return 0;
}

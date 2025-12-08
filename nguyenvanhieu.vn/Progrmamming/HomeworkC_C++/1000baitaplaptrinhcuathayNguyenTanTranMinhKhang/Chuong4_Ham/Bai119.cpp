//
// Created by ASUS on 12/8/2025.
//
#include <iostream>

using namespace std;

bool IsPrime(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n ; i+= 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void PrintPrimeLessThanN(int n) {
    cout << "Enter the value: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (IsPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    PrintPrimeLessThanN(n);
    return 0;
}
//
// Created by ASUS on 12/23/2025.
//
#include <iostream>

using namespace std;

void Sum(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}


int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Sum(n);
    }
    return 0;
}





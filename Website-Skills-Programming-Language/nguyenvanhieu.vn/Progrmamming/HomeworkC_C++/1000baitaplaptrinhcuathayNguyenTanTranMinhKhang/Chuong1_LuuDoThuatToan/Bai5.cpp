//
// Created by ASUS on 12/23/2025.
//
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        float s = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            s += (float)1.0 /((2*i)+1);
        }
        cout << s << endl;
    }
    return 0;
}
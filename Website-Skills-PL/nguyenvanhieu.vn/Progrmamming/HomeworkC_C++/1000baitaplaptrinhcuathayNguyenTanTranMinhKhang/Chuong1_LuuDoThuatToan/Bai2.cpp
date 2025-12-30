//
// Created by ASUS on 12/23/2025.
//
#include <iostream>
#include <math.h>

using namespace std;



int main () {
    int t;
    cin >> t;
    for (int i = 0; i <= t; i++) {
        int n, s = 0;
        cin >> n;
        for (int i = 0; i <= n; i++) {
            s += pow (i, 2);
        }
        cout << s << endl;
    }
    return 0;
}
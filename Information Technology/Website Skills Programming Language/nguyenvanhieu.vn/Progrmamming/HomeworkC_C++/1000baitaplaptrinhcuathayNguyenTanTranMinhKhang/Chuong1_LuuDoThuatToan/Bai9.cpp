#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void nhap(int &n) {
    cin >> n;
}

long long tinhGiaiThua(int n) {
    long long s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}

void xuat(long long s) {
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        nhap(n);
        long long s = tinhGiaiThua(n);
        xuat(s);
        // cin >> n;
        // long long s = 1;
        // for (int i = 1; i <= n; i++) {
        //     s *= i;
        // }
        // cout << s << endl;
    }
    return 0;
}
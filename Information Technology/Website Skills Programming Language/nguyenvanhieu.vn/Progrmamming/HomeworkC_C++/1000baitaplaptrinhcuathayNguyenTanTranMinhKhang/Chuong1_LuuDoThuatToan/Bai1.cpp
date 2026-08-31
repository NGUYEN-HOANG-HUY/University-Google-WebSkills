#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void nhap(int &n) {
    cin >> n;
}   

int tinhTong(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

void `xuat(int s) {
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        nhap(n);
        int s = tinhTong(n);
        xuat(s);
    }
    return 0;
}
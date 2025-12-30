//
// Created by ASUS on 12/23/2025.
//
#include <iostream>

using namespace std;

void LietKeUocSoNguyenDuong(int n) {
    if (n <= 0) {
        cout << "Khong hop le, xin vui long nhap lai!";
        return;
    }
    cout << n << endl;
    LietKeUocSoNguyenDuong(n - 1);
}


int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        LietKeUocSoNguyenDuong(n);
    }
    return 0;
}
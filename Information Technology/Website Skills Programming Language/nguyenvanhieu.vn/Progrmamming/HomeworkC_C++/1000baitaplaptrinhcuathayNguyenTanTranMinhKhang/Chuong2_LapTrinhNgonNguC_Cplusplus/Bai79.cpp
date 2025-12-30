//
// Created by ASUS on 12/23/2025.
//
#include <iostream>
#include <vector>

using namespace std;

// Nhập mảng
void NhapMang(vector<int>& a, int n) {
    a.resize(n); // cấp phát bộ nhớ
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

// Xuất mảng
void XuatMang(const vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Đếm số nguyên dương
int DemSoNguyenDuong(const vector<int>& a, int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a;
        NhapMang(a, n);
        XuatMang(a, n);
        cout << DemSoNguyenDuong(a, n) << endl;
    }

    return 0;
}

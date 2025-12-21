//
// Created by ASUS on 12/8/2025.
//
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

void NhapPhanSo(PhanSo &ps) {
    cout << "Nhap tu so: ";
    cin >> ps.tu;

    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> ps.mau;
        if (ps.mau == 0)
            cout << "Mau so khong hop le! Nhap lai!\n";
    } while (ps.mau == 0);
}

void XuatPhanSo(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau;
}

int main() {
    PhanSo p;
    NhapPhanSo(p);

    cout << "Phan so vua nhap: ";
    XuatPhanSo(p);

    return 0;
}

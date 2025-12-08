#include <iostream>
using namespace std;

#define Max 100

void Input(double a[], int &n) {   // truyền n bằng tham chiếu
    do {
        cout << "Nhap so phan tu n: ";
        cin >> n;
        if (n <= 1 || n >= Max) {
            cout << "Khong hop le, xin vui long nhap lai!\n";
        }
    } while (n <= 1 || n >= Max);

    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Output(double a[], int n) {
    cout << "Mang vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    double a[Max];
    int n;

    Input(a, n);
    Output(a, n);

    return 0;
}

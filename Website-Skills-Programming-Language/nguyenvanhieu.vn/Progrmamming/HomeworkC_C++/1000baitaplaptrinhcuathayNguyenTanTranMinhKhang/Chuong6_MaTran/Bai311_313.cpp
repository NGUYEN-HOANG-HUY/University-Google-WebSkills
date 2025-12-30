#include <iostream>
#include <vector>

using namespace std;

#define MAX 1000

void Nhap(int &n, int &m) {
    do {
        cout << "Nhap so dong n: ";
        cin >> n;

        cout << "Nhap so cot m: ";
        cin >> m;

        if (n < 1 || n > MAX || m < 1 || m > MAX) {
            cout << "Khong hop le! Nhap lai.\n";
        }

    } while (n < 1 || n > MAX || m < 1 || m > MAX);
}

void nhapMang(vector<vector<long long>> &a, int n, int m) {
    a.resize(n, vector<long long>(m));
    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

void xuatMang(const vector<vector<long long>> &a, int n, int m) {
    cout << "Mang vua nhap:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    vector<vector<long long>> a;

    Nhap(n, m);
    nhapMang(a, n, m);
    xuatMang(a, n, m);

    return 0;
}

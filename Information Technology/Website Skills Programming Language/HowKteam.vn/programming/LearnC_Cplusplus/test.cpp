#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000

void Nhap(int &n, int &m) {
    do {
        cin >> n >> m;
    } while (n < 1 || n > MAX || m < 1 || m > MAX);
}

void nhapMang(vector<vector<int>> &a, int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}

void xuatMang(const vector<vector<int>> &a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = " << a[i][j] << "  ";
        }
        cout << endl;
    }
}


void tongDong(const vector<vector<int>> &a, int n, int m) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        cout << "Tong dong " << i << " = " << sum << endl;
    }
}

void tongCot(const vector<vector<int>> &a, int n, int m) {
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        cout << "Tong cot " << j << " = " << sum << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        Nhap(n, m);

        vector<vector<int>> a(n, vector<int>(m));
        nhapMang(a, n, m);

        tongDong(a, n, m);
        tongCot(a, n, m);
    }

    return 0;
}

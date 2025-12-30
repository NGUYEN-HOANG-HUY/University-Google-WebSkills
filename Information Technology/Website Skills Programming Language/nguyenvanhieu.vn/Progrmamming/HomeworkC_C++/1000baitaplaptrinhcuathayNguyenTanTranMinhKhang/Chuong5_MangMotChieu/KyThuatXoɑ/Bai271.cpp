#include <iostream>
using namespace std;

// Hàm xóa phần tử tại chỉ số k
void xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout << "Chi so k khong hop le!\n";
        return;
    }

    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1]; // dịch trái
    }

    n--; // giảm số lượng phần tử
}

int main() {
    int n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    int a[100];  // mảng tối đa 100 phần tử
    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "Nhap chi so k muon xoa: ";
    cin >> k;

    xoaPhanTu(a, n, k);

    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

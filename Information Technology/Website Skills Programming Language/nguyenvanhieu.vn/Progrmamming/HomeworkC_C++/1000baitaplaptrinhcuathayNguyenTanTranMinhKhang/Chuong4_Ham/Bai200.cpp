#include <iostream>
#include <cmath>
using namespace std;

bool IsSquare(int n) {
    if (n < 0) return false;
    int x = sqrt(n);
    return x * x == n;
}

void PrintSquareLessThanN(int N) {
    cout << "Cac so chinh phuong nho hon " << N << " la: ";
    for (int i = 0; i < N; i++) {
        if (IsSquare(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    PrintSquareLessThanN(n);

    return 0;
}

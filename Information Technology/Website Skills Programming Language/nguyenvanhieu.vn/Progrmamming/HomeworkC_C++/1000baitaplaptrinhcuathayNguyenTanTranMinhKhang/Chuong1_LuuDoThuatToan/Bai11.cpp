#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long s = 0;
    long long T = 1;
    for (int i = 1; i <= n; i++) {
        T *= i;
        s += T;
    }
    cout << s << endl;
}
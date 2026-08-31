#include <iostream>

using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >>n;
        long long T = 1;
        for (int i = 1; i <= n; i++) {
            T *= x;
        }
        cout << T << endl;
    }
    return 0;
}



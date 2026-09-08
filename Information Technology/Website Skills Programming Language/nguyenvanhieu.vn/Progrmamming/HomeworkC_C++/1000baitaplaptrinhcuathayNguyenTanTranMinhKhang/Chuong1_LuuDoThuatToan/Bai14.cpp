#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n, x;
    cin >> n >> x;
    long long s = 0;
    for (int i = 0; i <= n; i++) {
        s += pow(x, 2 * i + 1);
    }
    cout << s << endl;
    return 0;
}
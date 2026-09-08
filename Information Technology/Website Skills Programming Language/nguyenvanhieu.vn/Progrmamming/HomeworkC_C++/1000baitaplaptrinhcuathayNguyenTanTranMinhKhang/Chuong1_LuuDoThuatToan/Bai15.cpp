#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
       int t = 0;
       t += i;
       s += (double)1 / t;
    }
    cout << s << endl;
}
#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    cout << "Max: " << max << endl;
    return 0;
}
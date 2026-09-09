#include <iostream>
using namespace std;

int main() {
    int n = 0;
    long long s = 0;

    while (s <= 10000) {
        n++;
        s += n;
    }

    cout << n << endl;

    return 0;
}
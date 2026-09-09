#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i * i < n; i++) {
        cout << i * i << " ";
    }

    return 0;
}
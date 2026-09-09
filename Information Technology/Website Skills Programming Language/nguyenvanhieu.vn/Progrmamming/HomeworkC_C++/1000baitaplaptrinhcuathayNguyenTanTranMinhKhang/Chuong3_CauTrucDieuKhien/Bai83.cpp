#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (a * b > 0) {
        cout << "Cung dau" << endl;
    } else if (a * b < 0) {
        cout << "Khac dau" << endl;
    } else {
        cout << "Mot trong hai so bang 0" << endl;
    }
}
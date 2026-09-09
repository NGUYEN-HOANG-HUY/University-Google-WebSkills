#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a != 0) {
        double x = -b / a;
        cout << "x = " << x << endl;
    }
    else if (b != 0) {
        cout << "Vo nghiem" << endl;
    }
    else {
        cout << "Vo so nghiem" << endl;
    }

    return 0;
}
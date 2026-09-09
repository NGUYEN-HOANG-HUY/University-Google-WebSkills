#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int thang;
        cin >> thang;

        if (thang >= 1 && thang <= 3) {
            cout << "Quy 1\n";
        }
        else if (thang >= 4 && thang <= 6) {
            cout << "Quy 2\n";
        }
        else if (thang >= 7 && thang <= 9) {
            cout << "Quy 3\n";
        }
        else if (thang >= 10 && thang <= 12) {
            cout << "Quy 4\n";
        }
        else {
            cout << "Thang khong hop le\n";
        }
    }
    return 0;
}
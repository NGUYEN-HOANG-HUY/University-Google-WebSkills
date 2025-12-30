#include <iostream>

using namespace std;

void nhapName(string &name) {
    cin >> name;
}

int main() {
    int t;
    cin >> t;
    while (t>0) {
        string name;
        nhapName(name);
        cout << "Hello " + string(name);
        cout << endl;
        t -= 1;
    }
    return 0;
}







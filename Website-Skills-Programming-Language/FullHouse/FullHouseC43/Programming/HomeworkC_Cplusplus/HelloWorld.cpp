#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Nhap ten: ";
    getline(cin, s);  // Nhập cả tên có khoảng trắng

    // Chuyển từng ký tự sang chữ hoa
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }

    cout << "Hello " << s << endl;

    return 0;
}

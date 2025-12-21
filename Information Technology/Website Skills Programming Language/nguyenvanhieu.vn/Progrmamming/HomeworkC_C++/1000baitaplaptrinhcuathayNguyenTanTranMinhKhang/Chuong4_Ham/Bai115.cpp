#include <iostream>
#include <string>
#include <limits> // for numeric_limit<

using namespace std;

struct STUDENT {
    string FullName;
    float Math;
    float Literature;
    float Calculate; // diem trung binh
};

// Nhập thông tin 1 học sinh (theo tham chiếu)
void GetInformation(STUDENT &s) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // tránh lỗi khi gọi sau cin >>
    cout << "Nhap Ho va Ten cua hoc sinh: \n";
    getline(cin, s.FullName);

    cout << "Nhap diem mon Toan: ";
    while (!(cin >> s.Math)) { // kiểm tra nhập hợp lệ
        cout << "Nhap sai. Vui long nhap lai diem Toan: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Nhap diem mon Van: ";
    while (!(cin >> s.Literature)) {
        cout << "Nhap sai. Vui long nhap lai diem Van: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // tính điểm trung bình
    s.Calculate = (s.Math + s.Literature) / 2.0f;
}

// Nhập danh sách n học sinh
void GetList(STUDENT a[], int &n) {
    cout << "Nhap so luong hoc sinh: ";
    while (!(cin >> n) || n < 0) {
        cout << "Nhap sai. Vui long nhap so nguyen >= 0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for (int i = 0; i < n; ++i) {
        cout << "\n--- Hoc sinh thu " << (i + 1) << " ---\n";
        GetInformation(a[i]);
    }
}

// In thông tin 1 học sinh
void OutInformation(const STUDENT &s) {
    cout << "Ho va ten       : " << s.FullName << '\n';
    cout << "Diem Toan       : " << s.Math << '\n';
    cout << "Diem Van        : " << s.Literature << '\n';
    cout << "Diem trung binh : " << s.Calculate << '\n';
}

// In danh sách
void OutList(STUDENT a[], int n) {
    cout << "\n====== DANH SACH HOC SINH ======\n";
    for (int i = 0; i < n; ++i) {
        cout << "\n-- Hoc sinh thu " << (i + 1) << " --\n";
        OutInformation(a[i]);
    }
}

int main() {
    const int MAX = 1000;
    STUDENT a[MAX];
    int n = 0;

    GetList(a, n);
    OutList(a, n);

    return 0;
}

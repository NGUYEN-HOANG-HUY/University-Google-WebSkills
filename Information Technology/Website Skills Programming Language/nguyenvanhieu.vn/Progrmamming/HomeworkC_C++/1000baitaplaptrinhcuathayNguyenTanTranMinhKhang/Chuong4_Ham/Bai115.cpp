#include <iostream>
#include <string>
#include <limits>
#include <fstream>

using namespace std;

struct STUDENT {
    string FullName;
    float Math;
    float Literature;
    float Average;
};

// ===== Nhập 1 học sinh =====
void GetInformation(STUDENT &s) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Nhap ho ten: ";
    getline(cin, s.FullName);

    cout << "Nhap diem Toan: ";
    while (!(cin >> s.Math)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Nhap lai diem Toan: ";
    }

    cout << "Nhap diem Van: ";
    while (!(cin >> s.Literature)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Nhap lai diem Van: ";
    }

    s.Average = (s.Math + s.Literature) / 2;
}

// ===== In 1 học sinh =====
void OutInformation(const STUDENT &s) {
    cout << "Ho ten: " << s.FullName << endl;
    cout << "Toan  : " << s.Math << endl;
    cout << "Van   : " << s.Literature << endl;
    cout << "TB    : " << s.Average << endl;
}

// ===== Thêm học sinh =====
void AddStudent(STUDENT a[], int &n, int max) {
    if (n >= max) {
        cout << "Danh sach day!\n";
        return;
    }
    cout << "\n--- THEM HOC SINH ---\n";
    GetInformation(a[n]);
    n++;
    cout << "Them thanh cong!\n";
}

// ===== Hiển thị danh sách =====
void ShowList(STUDENT a[], int n) {
    if (n == 0) {
        cout << "Danh sach rong!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << "\nHoc sinh " << i + 1 << endl;
        OutInformation(a[i]);
    }
}

// ===== Xóa học sinh theo tên =====
void DeleteStudent(STUDENT a[], int &n) {
    if (n == 0) {
        cout << "Danh sach rong!\n";
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string name;
    cout << "Nhap ten hoc sinh can xoa: ";
    getline(cin, name);

    for (int i = 0; i < n; i++) {
        if (a[i].FullName == name) {
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            cout << "Da xoa hoc sinh!\n";
            return;
        }
    }
    cout << "Khong tim thay hoc sinh!\n";
}

// ===== Lưu file =====
void SaveToFile(STUDENT a[], int n) {
    ofstream file("students.txt");
    if (!file) {
        cout << "Khong mo duoc file!\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        file << a[i].FullName << ","
             << a[i].Math << ","
             << a[i].Literature << ","
             << a[i].Average << endl;
    }

    file.close();
    cout << "Da luu vao file students.txt\n";
}

// ===== MENU =====
void Menu() {
    cout << "\n===== MENU =====\n";
    cout << "1. Them hoc sinh\n";
    cout << "2. Xoa hoc sinh\n";
    cout << "3. Hien thi danh sach\n";
    cout << "4. Luu vao file\n";
    cout << "0. Thoat\n";
    cout << "Chon: ";
}

int main() {
    const int MAX = 100;
    STUDENT a[MAX];
    int n = 0;
    int choice;

    do {
        Menu();
        cin >> choice;

        switch (choice) {
            case 1:
                AddStudent(a, n, MAX);
                break;
            case 2:
                DeleteStudent(a, n);
                break;
            case 3:
                ShowList(a, n);
                break;
            case 4:
                SaveToFile(a, n);
                break;
            case 0:
                cout << "Thoat chuong trinh!\n";
                break;
            default:
                cout << "Lua chon sai!\n";
        }
    } while (choice != 0);

    return 0;
}

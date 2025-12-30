#include <iostream>
#include <stdio.h>

#define MAX 100
using namespace std;

// Nhập mảng
void GetInformation(float a[], int &n) {
    do {
        printf("Nhap so luong n: ");
        scanf("%d", &n);
        if (n < 1 || n > MAX) {
            printf("Khong hop le, nhap lai!\n");
        }
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

// Xuất mảng
void OutInformation(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

// Tìm giá trị dương đầu tiên
float findTheFirstPositiveValue(float a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return a[i];
        }
    }
    return -1;
}

int main() {
    float a[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap mang\n");
        printf("2. Xuat mang\n");
        printf("3. Tim so duong dau tien\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                GetInformation(a, n);
                break;
            case 2:
                OutInformation(a, n);
                break;
            case 3: {
                float result = findTheFirstPositiveValue(a, n);
                if (result == -1)
                    printf("Mang khong co gia tri duong\n");
                else
                    printf("Gia tri duong dau tien: %.2f\n", result);
                break;
            }
            case 0:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 0);

    return 0;
}

# Hàm nhập mảng
def nhap_mang(n):
    arr = []
    for i in range(n):
        arr.append(int(input()))
    return arr

# Hàm lọc số lẻ
def loc_so_le(arr):
    answer = []
    for v in arr:
        if v % 2 != 0:
            answer.append(v)
    return answer

# Hàm in mảng
def in_mang(arr):
    for v in arr:
        print(v, end=" ")
    print()

# Hàm main
def main():
    n = int(input("Nhap so phan tu: "))
    mang = nhap_mang(n)

    print("Mang vua nhap:")
    in_mang(mang)

    mang_le = loc_so_le(mang)
    print("Cac so le trong mang:")
    in_mang(mang_le)

if __name__ == "__main__":
    main()

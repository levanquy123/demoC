#include <stdio.h>

/* Kiểu_Trả_Về - Tên Hàm ( Các tham số chuyền vào ){
    Các câu lệnh
    Return Về kết quả;
    } */

int CongHaiSoNguyen(int a, int b);
int TruHaiSoNguyen(int a, int b);
int NhanHaiSoNguyen(int a, int b);
double ChiaHaiSoNguyen(int a, int b);

int main(int argc, char const *argv[])
{
    system("cls");
    int a, b;
    printf("input value A: ");
    scanf("%d", &a);
    printf("input value B: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, CongHaiSoNguyen(a, b)); // Lôi Hàm cộng sài ra sài
    printf("%d - %d = %d\n", a, b, TruHaiSoNguyen(a, b));  // Lôi Hàm trừ sài ra sài
    printf("%d * %d = %d\n", a, b, NhanHaiSoNguyen(a, b)); // Lôi Hàm nhân sài ra sài
    printf("%d / %d = %.1lf\n", a, b, ChiaHaiSoNguyen(a, b)); // Lôi Hàm chia sài ra sài
    return 0;
}

// Hàm cộng 2 số nguyên
int CongHaiSoNguyen(int a, int b)
{
    return a + b;
}
// Hàm Trừ 2 số nguyên
int TruHaiSoNguyen(int a, int b)
{
    return a - b;
}
// Hàm Nhân 2 số nguyên
int NhanHaiSoNguyen(int a, int b)
{
    return a * b;
}
// Hàm Chia 2 số nguyên
double ChiaHaiSoNguyen(int a, int b)
{
    return (double)(a / b);
}
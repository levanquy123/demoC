// Bài 2
// Viết thân hàm cho nguyên mẫu hàm sau:

// - int inputNumber(); // Hàm này cho nhập một số nguyên từ bàn phím và trả lại chính số nguyên vừa nhập vào
// - int checkNumber(int num); // Hàm này kiểm tra một số nguyên là số nguyên tố hàm trả về 1 còn không phải hàm trả về 0
#include <stdio.h>
#include <math.h>

int inputNumber();
int checkNumber(int num);

int main(int argc, char const *argv[])
{

    printf("Nhap So nguyen tu ban phim: ");

    int a = inputNumber();
    int ketQua = checkNumber(a);

    if (ketQua == 0)
    {
        printf(" %d Khong la so nguyen to", a);
    }
    else if (ketQua == 1)
    {
        printf("%d la so nguyen to", a);
    }
}
int inputNumber()
{
    int a;
    scanf("%d", &a);
    return a;
}

int checkNumber(int num)
{
    int ketQua;
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
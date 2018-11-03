// Viết thân hàm cho nguyên mẫu hàm sau: long calFactorial(int n) trả về giá trị của n giai thừa được tính trong hàm trên.
//Sau khi hoàn tất thân hàm thì bạn hãy viết chương trình để kiểm tra kết quả của hàm calFactorial(int n).

#include <stdio.h>

long calFactorial(int n);

int main(int argc, char const *argv[])
{

    int n;

    printf("Nhap n: ");
    scanf("%d", &n);
   
    printf("Giai thua n la: %d", calFactorial(n));
    return 0;
}

long calFactorial(int n)
{
    int nhan = 1;

    for (int i = 1; i <= n; i++)
    {
        nhan = nhan * i;
    }
    return nhan;
}
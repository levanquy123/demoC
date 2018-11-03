#include <stdio.h>

int main()
{

    int n;

    printf("Nhap n: ");
    scanf("%d",&n);

    int b = 0; // b là biến để tách hàng đơn vị
    while (n > 0)

    {
        b = b+n%10; // coong
        n /=10;
    }

    printf("Tong cac chu so la: %d",b);
   
    return 0;
}
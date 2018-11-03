#include <stdio.h>

int main()
{
    int n, m;

    printf("Nhap n :");
    scanf("%d", &n);
     printf("Nhap m :");
    scanf("%d", &m);


    for (n = 200; n <= m; n++)
    {
        if (n % 9 == 0)
        {
            printf("chia het cho 9 la : %d\n",n);
        }
    }
}
#include <stdio.h>

int main()
{
    int a;
    int b;
    int x;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (a == 0)
    {
        if (b == 0)
        {
            {
                printf(" Pt vo so nghiem");
            }
        }
        else
        {
            printf("Pt vo nghiem");
        }
    }
    else
    {
        x = (double)a / b;
        printf("Nghiem: %d",x);
    }

    printf("\n");
    return 0;
}
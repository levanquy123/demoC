#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Nhap a: ");
    scanf("%d", &a);
    float *arr;

    arr = (float *)malloc(a * sizeof(float));

    for (int i = 0; i < a; i++)
    {
        printf("p[%d] = ", i);
        scanf("%f", arr + i);
    }

    for (int i = 0; i < a; i++)
    {
        printf("%.2f \n", *(arr + i));
    }
    return 0;
}

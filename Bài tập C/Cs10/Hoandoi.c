#include "stdio.h"

void hoanVi(int a, int b);
void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("input value A: ");
    scanf("%d", &a);
    printf("input value B: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("A sau khi hoan vi:%d \n", a);
    printf("B sau khi hoan vi:%d \n", b);
    return 0;
}
void hoanVi(int a, int b)
{
    int temp;
    temp = a;
    b = a;
    b = temp;
    printf("A sau khi hoan vi:%d \n", a);
    printf("B sau khi hoan vi:%d \n", b);
    return;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
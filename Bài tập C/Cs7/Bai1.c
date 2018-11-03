#include <stdio.h>

int main()
{  
    int arr[10];

    for (int i= 0;i<10;i++)
    { 
        printf("Nhap  gia tri cho mang: ");
        scanf("%d", &arr[i]);
    }
    printf("----\n");
    for (int j=0;j<10;j=j+2)
    {
        printf("arr[%d]\n",arr[j]);
    }
    return 0;
}
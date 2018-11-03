#include <stdio.h>


int main()
{
int arr[5];
int *p;
p = arr;
for (int i=0;i<5;i++){
    printf("Nhap[%d]:",i);
    scanf("%d",arr + i);
}
for (int i=0;i<5;i++){
    printf("Arr[%d]= %d\n",i,*(p+i));
}
}
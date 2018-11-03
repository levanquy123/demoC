#include <stdio.h>

int main(int argc, char const *argv[])
{
    system("cls");
    printf("\n");

    int arr[] = {2, 3, 4};

    for (int i = 0; i < 3; i++)
    {
        printf("Địa chỉ ô nhớ của arr[%d]= %x",i,arr + 1); // Lấy địa chỉ ô nhớ của mảng // arr + 1 : cộng ô nhớ kiểu int 4 byte
        printf("\nArr[%d]= %d\n",i,*(arr + i));
        printf("\n");

    }
    printf("Địa chỉ ô nhớ của phần tử đâu tiên trong mảng Arr là: %x\n",&arr[0]);
    printf("Địa chỉ ô nhớ của phần tử đâu tiên trong mảng Arr là: %x\n",arr);
    
}
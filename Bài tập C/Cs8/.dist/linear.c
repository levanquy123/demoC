#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   
    int arr[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 101;
        printf("%d\t", arr[i]);
    }
 

    int f;
    int step = 0;
    int fIndex = -1;

    printf("\nNhập số cần tìm trong mảng: ");
    scanf("%d", &f);
    for (int j = 0; j < 100; j++, step++)
    {
        if (arr[j] == f)
        {
            fIndex = j;
            break;
        }
    }
    if(fIndex !=-1)
    {
        printf("Tìm thấy %d trong arr tại vị trí %d sau %d bước",f,fIndex,step);
        
    }
    else
    {
        printf("Số cần tìm không tồn tại trong mảng ");
    }
}

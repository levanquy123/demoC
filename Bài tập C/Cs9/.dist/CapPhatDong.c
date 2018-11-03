#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *arr;
    int size;

    printf("Nhập kích thước từ bàn phím: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int)); // Dùng hàm tiền sử lí stdlib.h để xử lí
                                             // (int *) Ép kiểu
                                             // cú pháp Mảng = malloc (size * sizeof (int));
                                             // Cú pháp Mảng = (Ép Kiểu)malloc (size * sizeof (int));
    for (int i = 0; i < size; i++)
    {

        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
        printf("Giá trị của Các phần tử đó là: %d\n", arr + i);
        // fflush(stdin); // xoá bộ đệm
        printf("Địa chỉ ô nhớ Arr[%d]= %x\n", i, arr + i); //địa chỉ ô nhớ:  arr + i
    }
    //Cấp Thêm bộ nhớ  khi có nhu cầu // VD thiếu bộ nhớ cấp cần cấp thêm

    int more;
    printf("Nhập số phần tử muốn thêm: ");
    scanf("%d", &more);

    arr = (int *)realloc(arr, more * sizeof(int)); //Mảng = (int*)calloc(arr,count,sizeof(int));   Hàm colloc
    for (int i = 0; i < size + more; i++) // i < kích thước nhập ban đầu + thêm phần tử muốn thêm
    {
        printf("Địa chỉ ô nhớ của arr[%d]= %x\n", i, arr + i);
    }

    free(arr); // Giải phóng bộ nhớ
    return 0;
}

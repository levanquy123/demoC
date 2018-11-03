#include <stdio.h>

int main()
{
    int arr[100], f;

    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
        printf("%d\t", arr[i]);
    }

    printf("\nNhập số bạn cần tìm: ");
    scanf("%d", &f);

    int low = 0;
    int hi = 99, mid;
    int step = 0, fIndex = -1;


    while (low <= hi)

    {
        step++;
        if (arr[hi] == f)
        {
            fIndex = hi;
            break;
        }

        mid = (low + hi) / 2;

        if (arr[mid] == f)
        {
            fIndex = mid;
            break;
        }
        else if (f < arr[mid])
        {
            hi = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (fIndex != 1)
    {
        printf("Tìm thấy %d trong mảng arr tại vị trí %d sau %d bước", f, fIndex, step);
    }
    else
    {
        printf("Số bạn cần tìm không tồn tại trong mảng arr");
    }
    return 0;
}
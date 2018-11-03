#include <stdio.h>

int main(int argc, char const *argv[])
{
    char arr[9];
    for (int i = 0; i < 9; i++)
    {

        printf("Nhap Ki tu: ");
        fflush(stdin);
        scanf("%c", &arr[i]);
    }

    int tam = 0;

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == '@')
        {
            tam = 1;
            break;
        }
    }

    if (tam == 1)
    {
        printf("Tim Thay @\t");
    }
    else
    {
        printf("Khong tim thay @\n");
    }
    return 0;
}
// 1 mảng char 10 ký tự , tìm @ trong mảng đấy , b1 : nhập cho mảng , b2 : duyệt tìm @

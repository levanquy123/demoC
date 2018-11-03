
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char arr[100];

    printf("Nhap Arr: ");
    scanf("%[^\n]", arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 'a' || arr[i] <= 'z')
        {
            arr[i] -= 32;
            break;
        }
    }
    // printf("Chuyển hoá kí tự đầu thành in hoa: %s\n", arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ' ' && arr[i + 1] == ' ')
        {
            strcpy(&arr[i], &arr[i + 1]);
            i--;
        }
        
    }
    puts(arr);
    return 0;
}
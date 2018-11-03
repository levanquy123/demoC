#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Nhập chuỗi: ");
    gets(str);

    char n;
    printf("Nhập kí tự từ bàn phím: ");
    scanf("%c", &n);

    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (n == str[i])
        {
            count ++;         
        }
    }
    printf("%d",count);
}

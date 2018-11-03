#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    // char Chuoi[255], *s;

    printf("Nhap chuoi: ");
    gets(arr);
    // int tam = 0;
    //---------------------------
    // s = strupr(Chuoi);

    // printf("chuoi in hoa: ");
    // puts(s);
    //---------------------------
    // for(int i = 0; i < 10; i++)
    // {
    //     printf("%c\t", toupper(str[i]));
    // }
    // printf("\n");
    // }
    for (int i = 0; i < strlen(arr); i++)
    {
        //if (arr[100] == arr[i])
        //{
        arr[i] -= 32;
        //         tam = 1;
        //     }
    }
    // if (tam == 1)
    // {
    printf("In ki tu Hoa: ");
    puts(arr);
    // }
    // else
    // {
    //     printf("Nhap sai");
    // }
    // return 0;
}
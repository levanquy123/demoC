#include <stdio.h>
int main() 
{  
    char c;
    while (1)
    {
        printf("\nNhap Ki tu: ");
        scanf("%c", &c);

        getchar();
        if (c == 32)
        {
            break;
        }
        else if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
        {
            printf("Ki tu chu cai ");
        }
        else if ((c >= 48) && (c <= 57))
        {
            printf("Ki tu so ");
        }
        else if (((c >= 33) && (c <= 47)) || ((c >= 58) && (c <= 64)) || ((c >= 91) && (c <= 96)) || ((c >= 123) && (c <= 126)))
        {
            printf("Ki tu dac biet ");
        }
        else
        {
            printf("\n.....!");
        }
    }
    printf("\n");
    return 0;
}
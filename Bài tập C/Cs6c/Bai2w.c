#include<stdio.h>

int main(int argc, char const *argv[])
{
    char Kitu;
    
    while(Kitu != ' ')
    {
        printf("Nhap Ki tu: ");
        fflush(stdin);
        scanf("%c",&Kitu);
        if(('a'<= Kitu && Kitu <= 'z')||('A'<= Kitu && Kitu <= 'Z'))
        {
            printf("Ban vua nhap mot chu cai\n");
        }
        else if('0' <= Kitu && Kitu <= '9')
        {
            printf("Ban vua nhap vao so");
        }
        else if(Kitu == ' ')
        {
            return 0;
        }
        else
        {
            printf("Ban vua nhap ki tu dac biet");
        }
    
    }
    return 0;
}

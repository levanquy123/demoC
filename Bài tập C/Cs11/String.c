#include <stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char str[10];

    printf("Nhap chuoi: ");
    gets(str);

    // printf("Chuoi ban vua nhap la: ");

    // puts(str);
    for(int i=0;i<strlen(str)/2;i++){
        char temp;
        int index = strlen(str)-1-i;
  
        temp = str[index];
        str[index] = str[i];
        str[i] = temp;

    }
    printf("Vi tri sau khi hoan doi: ");
    puts(str);
    
    return 0;
}

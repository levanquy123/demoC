
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int aArr[5];
    int bArr[5];
    int *c;
    c = aArr;

    for(int i=0;i<5;i++){
        printf("Nhap Mang a[%d]: ",i);
        scanf("%d",&aArr[i]);

        printf("Nhap mang b[%d]: ",i);
        scanf("%d",&bArr[i]);

        printf("\n");
    }
    for(int i=0;i<5;i++){
        c[i] = aArr[i] + bArr[i];
       
    }
    for(int i=0;i<5;i++){
        printf("In: %d\n",*(c+i));
    }
    return 0;
}

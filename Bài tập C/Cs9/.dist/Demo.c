#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 4, 2, 6, 2};
    int *p;

    p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Gia tri bien arr[%d]: %d\n",i,*(p+i));
        printf("Dia chi bien arr[%d] = %x\n",i,p+i);
    }
    return 0;
}

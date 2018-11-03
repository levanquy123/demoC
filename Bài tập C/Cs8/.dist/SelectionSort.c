#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int arr[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 101;
        printf("%d\t", arr[i]);

    }
    int temp, step = 1;
    int Imin;

    for (int i = 0; i < 99; i++)
    {
        Imin = i;
                                                   
        int j;
        for (j = i + 1; j < 100; j++, step++)
        {
            if (arr[Imin] > arr[j])
            {
                Imin = j;
            }
            if (Imin != i)
        {
            temp = arr[i];
            arr[i] = arr[Imin];
            arr[Imin] = temp;
        }
    }
        }
        
    printf("\nMảng arr sau khi được sắp xếp:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
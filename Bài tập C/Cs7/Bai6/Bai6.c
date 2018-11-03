#include <stdio.h>

int main()
{
    int array[5][10];
    int a = 0;
    int b = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j || j == 0)
            {
                array[i][j] = 1;
            }
        }
        
    }
}
#include <stdio.h>

int main()
{
    char arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Nhap Ki Tu: ");
        scanf("%c", &arr[i]);
        getchar();
    }
    char temp;

    for(int i=0;i<10;i++)
    {    
        for(int j=i+1;j<10;j++)
        {
            // printf("%d-%d\n",arr[i],arr[j] );
           if (arr[i]>arr[j]){

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
     for(int i=0;i<10;i++){
        printf("Sap xep : %c\n",arr[i]);    
    }

    return 0;
}

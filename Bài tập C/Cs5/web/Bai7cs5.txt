#include <stdio.h>
#include<math.h>
int main() 
{  
    int num1;
    int num2;
    int Cong;
    int Tru;
    int Nhan;
    int Chia;
    int chon;
    printf("Input num1: ");
    scanf("%d", &num1);
    printf("Input num2: ");
    scanf("%d", &num2);
    printf("\tMENU");
    printf("\n==================");
    printf("\n+");
    printf("\n-");
    printf("\n*");
    printf("\n:");
    printf("\n==================");
    printf("\nSelect operand (+, - , *, :): ");
    getchar();
    scanf("%d",&chon);
    getchar();
    switch (chon)
    {
        case 1: 
            Cong = num1 + num2;
            printf("\nnum1 + num2 = %d", Cong);
            break;
        case 2: 
            Tru = num1 - num2;
            printf("\nnum1 - num2 = %d", Tru);
            break;
        case 3: 
            Nhan = num1 * num2;
            printf("\nnum1 * num2 = %d", Nhan);
            break;
        case 4: 
            Chia = num1 / num2;
            printf("\nnum1 : num2 = %d", Chia);
            break;
        default:
            printf("Sai Gia Tri!");
    }
    printf("\n");
    return 0;                
}
#include <stdio.h>

int main()
{
    system("cls");
    printf("\n-------Menu--------\n\n");
    printf("1. Doc Sach\n");
    printf("2. Nghe Nhac\n");
    printf("3. Choi The Thao\n");
    printf("4. May Tinh\n");
    printf("5. Thoat\n\n");

    int chon;
    //while (chon != 13)
    //{
        printf(" Nhap lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Ban da lua chon doc sach\n");
            break;
        case 2:
            printf("Ban da lua chon Nghe Nhac\n");
            break;
        case 3:
            printf("Ban da lua chon Choi the thao\n");
            break;
        case 4:
            printf("Ban da lua chon May Tinh\n");
            break;
        case 5:
            printf("Thoat\n");
            break;
        default:
         
            printf("\nBan da nhap sai lua chon\n");
         
        }
   // }
}

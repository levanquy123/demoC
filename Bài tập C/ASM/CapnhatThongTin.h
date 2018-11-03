#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DoiBong
{
    char Madoi[10];
    char Tendoi[20];
    char TenHlv[30];
};

void capNhatThongTin()
{
    char Madoi[10];
    char Tendoinew[10];
    char TenHlvnew[10];

    char select;
    int index = -1;
    int n=0;
    struct DoiBong *db;

    printf("Nhập mã đội: ");
    scanf("%s", &Madoi);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(Madoi, (db + i)->Madoi) == 0)
        {
            printf("Sua ten doi: ");
            scanf("%s", Tendoinew);
            printf("Sua hlv doi: ");
            scanf("%s", TenHlvnew);

            printf("Ban co muon cap nhap thong tin khong? (Y/N): ");
            scanf("%c", &select);

            if (select == 'y' || select == 'Y')
            {

                strcpy(Tendoinew, (db + i)->Tendoi);
                strcpy(TenHlvnew, (db + i)->TenHlv);
                printf("Cap nhap thanh cong\n");
            }
            if(select == 'y' || select == 'Y')
            {
                printf("Ban co muon tiep tuc?(Y/N)\n");
                scanf("&c",&select);
                
            }
                
            }
        }
    

    if (index != -1)
    {
        char select;
        do
        {
            printf("                                   \n");
            printf("===== Cập nhập thông tin đội bóng ====\n");
            printf("Sửa tên đội: ");
            scanf("%[^\n]s", db[index].Tendoi);
            getchar();
            printf("Sửa tên huấn luyện viên: ");
            scanf("%[^\n]s", db[index].TenHlv);
            getchar();

            printf("Bạn có muốn tiếp tục (Y/N) ");
            fflush(stdin);
            scanf("%c", &select);

            db[index];

            printf("Thông tin đã được cập nhập!");
            printf("\n");
            getchar();

        } while (select == 'n' || select == 'N');
    }
}

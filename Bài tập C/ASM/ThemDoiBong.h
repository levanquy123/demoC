#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct DoiBong
{
    char Madoi[10];
    char Tendoi[20];
    char TenHlv[30];
};
void QuanLiDanhSachDoiBong();

void ThemDoiBong()
{
    int n=0;
    FILE *p;
    struct DoiBong *Db;
    int count = 0;

    Db = (struct DoiBong *)malloc(n * sizeof(struct DoiBong));
    char select;

    while (1)
    {
        Db = realloc(Db, (n + 1) * sizeof(struct DoiBong));

        printf("                                   \n");
        printf("==== Thêm mới một đội bóng ====\n");

        printf("- Nhập mã đội: ");
        fflush(stdin);
        scanf("%[^\n]", (Db + n)->Madoi);

        printf("- Nhập tên đội: ");
        fflush(stdin);
        scanf("%[^\n]", (Db + n)->Tendoi);

        printf("- Nhập tên huấn luyện viên: ");
        fflush(stdin);
        scanf("%[^\n]", (Db + n)->TenHlv);

        n++;
        count = n;

        printf("Bạn có muốn tiếp tục ?(Y/N): ");
        fflush(stdin);
        scanf("%c", &select);

        if (select == 'n')
        {
            p = fopen("Data.dat", "wb");

            fwrite(Db, sizeof(struct DoiBong ), 1, p);
            fclose(p);
            QuanLiDanhSachDoiBong();
            getchar();

            break;
        }
    }
}
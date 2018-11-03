#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DoiBong
{
    char Madoi[10];
    char Tendoi[20];
    char TenHlv[30];
};

int n = 0;

void XemDanhSachDoiBong();
void ThemDoiBong();
void capNhatThongTin();
void QuanLiDanhSachDoiBong();

void MainMenu()
{
    char select;

    printf("--- Chào mừng đến V-League 2018 ---\n");
    printf("                                   \n");
    printf("===================================\n");
    printf("                                   \n");
    printf("1. Quản lý danh sách đội bóng\n");
    printf("2. Quản lý lịch thi đấu\n");
    printf("3. Quản lý kết quả thi đấu\n");
    printf("4. Thống kê\n");
    printf("0. Thoát\n");

    printf("#Chọn: ");
    fflush(stdin);
    scanf("%c", &select);
    system("cls");
    switch (select)
    {
    case '1':
        QuanLiDanhSachDoiBong();
        break;
    // case '2':
    //     Update();
    //     break;
    // case '3':
    //     QuanhLiKetQuaDoiBong();
    //     break;
    // case '4':
    //     Thongke();
    //     break;
    case '0':
        printf("Exit !");
        break;
    default:
        printf("Bạn nhập sai, mời bạn nhập lại !\n");
        break;
    }
}


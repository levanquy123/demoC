#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void XemDanhSachDoiBong();
void ThemDoiBong();
void capNhatThongTin();
void QuanLiDanhSachDoiBong();
void MainMenu();

void QuanLiDanhSachDoiBong()

{
    int select;
    do
    {

        printf("                                   \n");
        printf(" Quản lý danh sách đội bóng\n");
        printf("1. Xem danh sách đội bóng\n");
        printf("2. Cập Nhập thông tin đội bóng\n");
        printf("3. Thêm mới đội bóng\n");
        printf("4. Trở về menu chính\n");
        printf("===================================\n");
        getchar();
        printf("#Chọn: ");
        fflush(stdin);
        scanf("%d", &select);
        // system("cls");

        switch (select)
        {
        case 1:
            XemDanhSachDoiBong();
            getchar();
            break;
        case 2:
            capNhatThongTin();
            getchar();
            break;
        case 3:
            ThemDoiBong();
            getchar();
            break;
        case 4:
            MainMenu();
            getchar();
            break;
        default:
            printf("Bạn đã nhập sai \n");
            break;
        }
    } while (select != 0);

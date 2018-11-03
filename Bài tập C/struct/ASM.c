#include <stdio.h>
#include <string.h>

void MainMenu();
void ThemDoiBong();
void QuanLiDanhSachDoiBong();
void XemDanhSachDoiBong();
void CapNhapThongTin();

struct Team // Tạo struct Team có Mã đội Tên đội và Quản lí
{
    char MaDoi[10];
    char TenDoi[50];
    char QuanLi[50];
};

struct Team teams[200]; //  Tạo struct biến Toàn cục sài được cho tất cả các Hàm
int count = 0;          // Tạo 1 biến đếm

int main(int argc, char const *argv[])
{
    // system("cls");
    MainMenu();
    return 0;
}

void MainMenu()
{
    int chon;
    do
    {
        printf("\n");
        printf("--- Chào mừng đến V-League 2018 ---\n");
        printf("                                   \n");
        printf("===================================\n");
        printf("                                   \n");
        printf("1. Quản lý danh sách đội bóng\n");
        printf("2. Quản lý lịch thi đấu\n");
        printf("3. Quản lý kết quả thi đấu\n");
        printf("4. Thống kê\n");
        printf("0. Thoát\n");
        printf("===================================\n");

        printf("#Chọn: ");
        scanf("%d", &chon);
        // system("cls");

        switch (chon)
        {
        case 1:
            QuanLiDanhSachDoiBong(); // Gọi hàm quản lí
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            break;
        default:
            printf("Bạn đã nhập sai !");
            break;
        }
    } while (chon != 0); // While khác 0 break về Menu
}
void QuanLiDanhSachDoiBong()
{
    int chon;
    do
    {
        // printf("===================================\n");
        printf("                                   \n");
        printf(" Quản lý danh sách đội bóng\n");
        printf("1. Xem danh sách đội bóng\n");
        printf("2. Cập Nhập thông tin đội bóng\n");
        printf("3. Thêm mới đội bóng\n");
        printf("4. Trở về menu chính\n");

        printf("#Chọn: ");
        scanf("%d", &chon);
        // system("cls");
        switch (chon)
        {
        case 1:
            XemDanhSachDoiBong();
            break;
        case 2:
            CapNhapThongTin();
            break;
        case 3:
            ThemDoiBong();
            break;
        // case 4:
        //     MainMenu();
        //     break;
        default:
            printf("Bạn đã nhập sai \n");
            break;
        }
    } while (chon != 0);
}
void ThemDoiBong() // Thêm 1 đội bóng
{
    int chon;
    struct Team team;
    do
    {
        printf("Nhập Mã Đội: ");
        scanf("%s", team.MaDoi);
        fflush(stdin); // chống trôi lệnh
        printf("Nhập Tên Đội: ");
        scanf("%[^\n]s", team.TenDoi);
        // %[^\n]s : Gõ tên được khoảng cách
        fflush(stdin); // chống trôi lệnh
        printf("Nhập Tên Huấn Luyện Viên: ");
        scanf("%[^\n]s", team.QuanLi);
        fflush(stdin); // chống trôi lệnh
        // printf("%s - %s - %s \n",team.MaDoi,team.TenDoi,team.QuanLi);
        printf("Bạn có muốn tiếp tục? (Y/N): ");
        fflush(stdin);
        // struct Team teams[200]; // biến cục bộ chỉ sài cho hàm ThemDoiBong
        teams[count] = team;
        count++; // mỗi lần nhập xong biến đếm tăng lên 1 đội
        // printf("%s- %s - %s",teams[0].MaDoi,teams[0].TenDoi,teams[0].QuanLi);
    } while (chon != 'N' || chon != 'n');
}
void XemDanhSachDoiBong()
{
    printf("TEAMS\n");

    printf("--------------------------------------------------\n");
    printf("| %-6s | %-16s          | %-15s  |\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < count; i++)
    {
        printf("| %s      | %s                | %s                |\n", teams[i].MaDoi, teams[i].TenDoi, teams[i].QuanLi);
    }
    printf("---------------------------------------------------\n");
}
void CapNhapThongTin()
{
    char MaDoi[10];
    struct Team team;
    int index = -1;
    printf("Nhập Mã Đội: ");
    scanf("%s", MaDoi);
    fflush(stdin);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(MaDoi, teams[i].MaDoi) == 0)
        {

            index = i;
            break;
        }
    }
    if (index != -1)
    {

        strcpy(team.MaDoi, teams[index].MaDoi);

        printf("Nhập Tên Đội: ");
        scanf("%[^\n]s", team.TenDoi);
        // %[^\n]s : Gõ tên được khoảng cách
        fflush(stdin); // chống trôi lệnh
        printf("Nhập Tên Huấn Luyện Viên: ");
        scanf("%[^\n]s", team.QuanLi);
        fflush(stdin); // chống trôi lệnh

        teams[index] = team;
    }
}
 #include <stdio.h>

int main(int argc, char const *argv[])
{
    system("cls");
    printf("\n");

    int number = 10; // khai báo biến int Number = 10
    int *pNum;       // (Kiểu_dữ_liệu) * (Tên_biến_con_trỏ);

    //&number                 //lấy ra địa chỉ ô nhớ của biến

    pNum = &number; // Gán địa chỉ của biến Number cho con trỏ pNum

    printf("Nhập giá trị từ bàn phím: ");
    scanf("%d",pNum); // Nhập giá trị cho ô nhớ địa chỉ pNum

    printf("Địa chỉ của ô nhớ của biến pNum: %x\n", &number); // in ra giá trị kiểu Hexa
    printf("Địa chỉ của ô nhớ của biến pNum: %p\n", pNum);    // Địa chỉ của * trỏ

    printf("Giá trị của biến Number: %d\n", number);
    printf("Giá trị của biến Number: %d\n", *pNum); // In ra vùng trỏ của biến

    pNum++;                                          // Cộng thêm 4 đơn vị vì kiểu Int 4 byte
    printf("Địa chỉ ô nhớ biến Number: %x\n", pNum); // Giá trị của * trỏ khi cộng byte Int
    printf("\n");
    return 0;
}

// Xây dựng một hàm có đầu vào là một mảng 10 số nguyên.
// Hàm sẽ tìm kiếm giá trị lớn nhất trong mảng truyền vào và sau đó trả về giá trị lớn nhất.
// Viết chương trình để kiểm tra hàm trên với dữ liệu được nhập từ bàn phím.

#include<stdio.h>

int kiemTra(int Array[]);
int main(int argc, char const *argv[])
{
    int Array[10];

    for(int i=0;i<10;i++){
        printf("Nhap Arr[%d]: ",i);
        scanf("%d",&Array[i]);
        getchar();
     
    }
     printf("So lon nhat trong mang la: %d",kiemTra(Array));
    return 0;
}
int kiemTra(int Array[]){
    int Max= Array[0];
    
    for(int i =0; i < 10;i++){
        if(Array[i] > Max){
            Max = Array[i];
        }  
    }
    return Max;
}
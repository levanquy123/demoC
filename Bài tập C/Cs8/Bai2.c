// Viết chương trình nhập dữ liệu cho một mảng chứa 10 số nguyên và sau đó nhập một số bất kỳ trên màn hình console.
//Chương trình sẽ đưa ra thông báo số đó có trong mảng không, kèm theo vị trí xuất hiện cuối cùng và số lần xuất của số đó trong mảng.
// a [i] == snv 0 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr1[10];

    for (int i = 0; i < 10; i++)                 //   Nhập xuất
    {
        printf("Nhap Mang 10 so: ");              
        scanf("%d", &arr1[i]);
    }
    int a;                                      // Nhập số bất kì
    printf("Nhap so bat ki: ");
    scanf("%d", &a);

    int tam = 0;            // Tạo 1 biến tạm = 0
    int Count=0;                 // tạo 1 biến dếm
    int index;               // Vị trí mảng 

    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] == a)
        {
            tam = 1;    // nếu mảng i = a thì tam = 1
            Count++;       // nếu i = a thì đếm cộng thêm 1 đơn vị
            index = i;     // vị trí = i
        }
    }
    if (tam == 1)           // tam bằng 1 thì in
    {
        printf("So co trong mang \t", tam);             // số có trong mảng  
        printf("So Lan xuat hien: %d\t", Count);        // số lần suất hiện     = count + 1
        printf("Xuat hien vi tri cuoi cung trong mang la: %d\t", index);        //xuất hiện vị trí = index
    }
    else
    {
        printf("So do khong co trong mang\n");      // Hoặc nếu mảng i không bằng a thì ko có số đó trong mảng
    }

    return 0;
}

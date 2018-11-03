// Viết chương trình thực hiện nhập một số nguyên n,
// sau đó nhập dữ liệu cho mảng n phần tử số thực. Sắp xếp theo chiều giảm dần của mảng đó và hiển thị dữ liệu lên màn hình.
// lấy số đầu mình ss với số t2 nếu s1>s2 thì đổi chỗ cho đến hết

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,4,5,3,7,6,8,3,9};
    int temp; // Khai báo 1 biến trung gian

    for (int i =0;i<10;i++){      // so sánh idex đầu tiên 0 mảng i vơi  tất cả phần tử mảng j // rồi t1  t2 t3 .....
        for(int j=0;j<10;j++)       
        {
            if(arr[i]>arr[j]){

                temp = arr[i];      // Trung gian = i
                arr[i]=arr[j];      // i = j
                arr[j]=temp;        // j = Trung gian
            }
        }
    }
    
    for(int i=0;i<10;i++){
        printf("Sap xep giam dan: %d\n",arr[i]);    
    }
    return 0;
}

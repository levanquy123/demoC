//  Viết chương trình cho phép sử dụng con trỏ số nguyên và cấp phát bộ nhớ động để thao tác với con trỏ trên như một mảng. Các yêu cầu cụ thể như sau:

// Cấp phát cho con trỏ n phần tử và nhập giá trị cho n phần tử đó
// In mảng n phần tử vừa nhập ở trên
// Nhập thêm một phần tử mới và hiển thị mảng mới ra
// Nhập vào giá trị phần tử cần xoá
// Xoá phần tử ra khỏi mảng trên
// Chú ý: Đây là bài có mức độ khó, đòi hỏi sinh viên phải biết thuật toán xoá phần tử trong mảng kết hợp với sử dụng hàm memmove()

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{   
    int n; 
    int *pInt;

    // Nhap Gia Tri n
    printf("Nhap gia tri n: ");
    scanf("%d",&n);

    pInt = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        //printf("In gia tri vua nhap [%d]: %d\n",i,pInt+i);
        printf("Nhap Gia Tri[%d]: ",i);
        scanf("%d",pInt + i);
        getchar();
    }
    // Nhập thêm giá trị
    
    n=n +1;
    pInt = (int*)realloc(pInt,n*sizeof(int));
    printf("Nhap them 1 phan tu: ");
    scanf("%d",&n);




    return 0;
}

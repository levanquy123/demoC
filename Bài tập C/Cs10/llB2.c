// Bài 2
// Viết thân hàm cho nguyên mẫu hàm sau:

// - int inputNumber(); // Hàm này cho nhập một số nguyên từ bàn phím và trả lại chính số nguyên vừa nhập vào
// - int checkNumber(int num); // Hàm này kiểm tra một số nguyên là số nguyên tố hàm trả về 1 còn không phải hàm trả về 0
#include<stdio.h>
#include<math.h>

int inputNumber();
int checkNumber(int num);

int main(int argc, char const *argv[])
{
    int a;
    printf("Nhap 1 so nguyen tu ban phim: ");

    a = inputNumber();

    int kq = checkNumber(a);

    if(kq == 0){
        printf("%d không phải số nguyên tố",a);
    }
    if(kq == 1){
        printf("%d là số nguyên tố ",a);
    }
    return 0;
}
int inputNumber(){
    int a;
    scanf("%d",&a);
    return a;
}
int checkNumber(int num){
    int kq;
    for(int i=2;i<=sqrt(num);i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
//Sử dụng con trỏ để gán giá trị cho 2 biến kiểu nguyên (a, b) được nhập vào từ bàn phím
// sau đó hiển thị 2 biến sau khi tráo đổi giá trị và địa chỉ của vùng nhớ 2 biến này.

#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    
    int *p1;
    int *p2;

    p1 = &a;
    p2 = &b;
	printf("\n");
  	
    
    // printf("\tGia tri cua bien p1 (dia chi cua bien a duoc gan vao bien *p1): %x\n", p1);
    // printf("\tgia tri cua bien p2 (dia chi cua bien b duoc gan vao bien *p2): %x\n", p2);
    
    printf("\tGia tri p1: %d\n", *p1);
    printf("\tgia tri p2: %d\n", *p2);

    int *temp;

    temp = p1;
    p1 = p2;
    p2 = temp;

    
    printf("\tgia tri p1: %d\n", *p1);
    printf("\tgia tri p2: %d\n", *p2);

    printf("\tDia chi bien a: %x\n", &a);
  	printf("\tDia chi bien b: %x\n", &b);
	
	printf("\tgia tri cua p1: %x\n", p1);
    printf("\tgia tri cua p2: %x\n", p2);
    
    return 0;
}
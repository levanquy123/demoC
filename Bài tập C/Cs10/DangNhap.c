#include<stdio.h>
#include<string.h>

int main(){
	
    // printf("So sánh 2 chuỗi: ");
    // int kq = strcmp(str1, str2);

    // if (kq < 0)
    // {
    //     printf("%s < %s", str1, str2);
    // }
    // else if (kq == 0)
    // {
    //     printf("%s == %s", str1, str2);
    // }
    // else
    // {
    //     printf("%s > %s", str1, str2);
    // }
	char str1[50];
	char str2[50];

    char ID[100];
	char Pass[100];

	int kqID = strcmp(str1,ID);
	int kqPass = strcmp(str2,Pass);
	
    printf("\n");
	printf("\t     ID: ");
	gets(ID);
	printf("\t     PassWord: ");
	gets(Pass);
	
	
	
	printf("\t      --------------\n");
	
	if(kqID < 0)
	{
		printf("\t  Dang Nhap Thanh Cong\n");
	}
	else
	{
		printf("\t  Dang Nhap That Bai\n");
	}
}
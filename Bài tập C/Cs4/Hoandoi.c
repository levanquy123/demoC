#include <stdio.h>
#include <conio.h>


int main (){

   int num1,num2;

 	printf("nhap num1: ");
 	scanf("%d",&num1);
	printf("nhap num2: ");
	scanf("%d",&num2);
	
	int tam = num1;
	num1 = num2;
	num2 = tam;
	num1++;
	num2++;
	printf("ket qua hoan doi : num1= %d ,num2= %d",num1,num2);
	getch();
	return 0;
	
 
}

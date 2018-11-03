#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("Nhap a: ");
	scanf("%d", &a);

	printf("Nhap b: ");
	scanf("%d", &b);

	double tich;
	tich = (double)a * b;
	// tich = ((double)(a/b)) + ((double)(a*b))

	printf("a / b= %.7lf", tich);
	return 0;
}
//  "%d+̀d=%d",a,b,a+b
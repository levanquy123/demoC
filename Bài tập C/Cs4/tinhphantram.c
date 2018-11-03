#include <stdio.h>

int main()
{
    int luongcoban = 1200;
   
    double DA = (luongcoban * 12)/100; 
    int TA = 10;
    int HRA = 150;
    int khoankhac = 50;
    double thuePF =(luongcoban*14)/100;
    double thueIT = (luongcoban * 15)/100; 
	double luongthuclinh;

    luongthuclinh =(double) (luongcoban + DA + HRA + TA + khoankhac - (thuePF + thueIT));
    printf("luong thuc linh la: %.1lf", luongthuclinh);

    return 0;
}
// int a; 1 2 43 
// float b; 1.2. 4.4 3.12

//a + b = (double)(a + b)
 //a = 1
 // b = 1.1


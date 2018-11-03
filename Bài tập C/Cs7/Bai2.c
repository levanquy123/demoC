#include"stdio.h"

float max(float a[],int n);//Khai bao prototype

void main()
{

float a[10];
int n,i;
printf("\nMuon nhap may so: ");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	printf("\nSo thu %d: ",i+1);
	scanf("%f",&a[i]);
	}
printf("\nSo lon nhat la: %f",max(a,n));
getch();
}

float max(float a[],int n)
{
int i;
float max; 
max=a[0]; 		     //cho phan tu dau tien la max
for(i=1;i<n;i++)
	{
	if(max<a[i])	      //neu so dang xet > max
		max=a[i];  	//gan so nay cho max
	}
return max;
}
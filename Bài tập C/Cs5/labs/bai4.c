#include <stdio.h>
#include <conio.h>
 

int TCS(int n)
{
  int s=0;
  while (n>0)
  {
    int k=n%10;
    s=s+k;
    n=n/10;
  }
  return s;
}
 
void main()
{
  int n;
  printf("Nhap n=");
  scanf("%d",&n);

  int ChuSo=TCS(n);
  while (ChuSo>9)
  {
     ChuSo=TCS(ChuSo);
  }
  printf("Chu so cuoi cung =%d",ChuSo);
  getch();
}
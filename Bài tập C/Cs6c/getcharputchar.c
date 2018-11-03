#include <stdio.h>
#include<math.h>

int F(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    return F(n-1)+F(n-2);
}
int main()
{
    int n,i;
    printf("Nhap vao so nguyen can tinh:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d  ",F(i));
    
}
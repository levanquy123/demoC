// #include <stdio.h>

// int power(int a, int b);

// // -------------------------------------
// int main(int argc, char const *argv[])
// {

//     int a, n;

//     printf("input value A: ");
//     scanf("%d", &a);

//     printf("input n: ");
//     scanf("%d", &n);

//     printf("%d ^ %d = %d", a, n, power(a, n));
//     return 0;
// }
// int power(int a, int n)
// {
//     int Kq;
//     if (n > 0)
//     {
//         if (n == 0)
//         {
//             return 1;
//         }
//         else
//         {
//             int Kq = a;
//             for (int i = 1; i < n; i++)
//             {
//                 Kq *= a;
//             }
//             return Kq;
//         }
//     }
// }
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int n;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap n: ");
    scanf("%d", &n);


    int Kq = 1;
    for (int i = 0; i < n; i++)
    {
        Kq *= a;
    }
    printf("Kq a^n: %d",Kq);
    return 0;
}

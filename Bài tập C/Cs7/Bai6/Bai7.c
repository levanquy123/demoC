#include <stdio.h>

int main(int argc, char const *argv[])
{
    double Array[5][6];
  double Diem =0;
    for (int i = 0; i < 5; i++)
  
    {
        
        printf("StuDent %d: \n", i + 1);
        
        for (int j = 0; j < 6; j++)
        {
            if (j == 0)
            {
                printf("Nhap LGC: ");
                scanf("%lf", &Array[i][j]);
                Diem += Diem;
            }
            else if (j == 1)
            {
                printf("Nhap DSA: ");
                scanf("%lf", &Array[i][j]);
                 Diem += Diem;
            }
            else if (j == 2)
            {
                printf("Nhap HDJ: ");
                scanf("%lf", &Array[i][j]);
                Diem += Diem;
            }
            else if (j == 3)
            {
                printf("Nhap RDBMS: ");
                scanf("%lf", &Array[i][j]);
                Diem += Diem;
            }
            else if (j == 4)
            {
                printf("Nhap C#: ");
                scanf("%lf", &Array[i][j]);
                Diem += Diem;
            }
            else if (j == 5)
            {
                printf("Nhap AVG: ");
                scanf("%lf", &Array[i][j]);
                Diem += Diem;
            }
            if (j>5){
            Diem = Diem + Array[i][j];
            Array[i][j] = (Diem / 5);
            }
        }
        }

    printf("STUDENT\t\t| LGC\t| DSA\t| HDJ\t| RDBMS\t| C#\t| AVG\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("STUDENT %d ", i + 1);
        for (int j = 0; j < 6; j++)
        {
            printf("\t| %0.1lf ", Array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

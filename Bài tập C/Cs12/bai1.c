 #include <stdio.h>
#include <string.h>


struct Mark
{
    char subject[80];
    float written;
    float practical;
};

int main(int argc, char const *argv[])
{
    struct Mark mark;
   
    
    double diem_TB;

    printf("Mon Hoc: Lap Trinh C Co Ban\n");

    printf("Nhap Diem Li: ");
    scanf("%f",&mark.written);
    printf("Nhap TH: ");
    scanf("%f",&mark.practical);

    diem_TB = (double)(mark.written + mark.practical) / 2;
    printf("Diem Tb: %.2lf",diem_TB);

    return 0;
}

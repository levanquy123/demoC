#include <stdio.h>
#include <string.h>
struct DataSp
{
    char name[100];
    int mount;
    float prices;
    float total;
};

int main(int argc, char const *argv[])
{
    float gia;
    struct DataSp sp[5];
    for (int i = 1; i <= 5; i++)
    {
        
        fflush(stdin);
        printf("Ten san pham %d ", i);
        gets(sp[i].name);
        printf("So luong san pham %d ", i);
        scanf("%d", &sp[i].mount);
        printf("Don gia san pham %d ", i);
        scanf("%f", &sp[i].prices);
        sp[i].total = sp[i].mount * sp[i].prices;
        gia += sp[i].total;
    }
        printf("DANH MUC SAN PHAM\n");
         printf("----------------------------------------------------------\n");
         printf("|STT|\tTen san pham\t|So luong|Don gia($)|Tong tien($)|\n");
         printf("----------------------------------------------------------\n");
    for (int i = 1; i <= 5; i++)
    {
       
         printf("| %d |%s\t\t\t|\t%d|\t%.0f|\t%.0f\n",i,sp[i].name,sp[i].mount,sp[i].prices,sp[i].total);

    }
    printf("----------------------------------------------------------\n");
    printf("                                                  %.0f\n",gia);
    printf("----------------------------------------------------------\n");
#include <stdio.h>
#include <string.h>
struct DataSp
{
    char name[100];
    int mount;
    float prices;
    float total;
};

int main(int argc, char const *argv[])
{
    float gia;
    struct DataSp sp[5];
    for (int i = 1; i <= 5; i++)
    {
        
        fflush(stdin);
        printf("Ten san pham %d ", i);
        gets(sp[i].name);
        printf("So luong san pham %d ", i);
        scanf("%d", &sp[i].mount);
        printf("Don gia san pham %d ", i);
        scanf("%f", &sp[i].prices);
        sp[i].total = sp[i].mount * sp[i].prices;
        gia += sp[i].total;
    }
        printf("DANH MUC SAN PHAM\n");
         printf("----------------------------------------------------------\n");
         printf("|STT|\tTen san pham\t|So luong|Don gia($)|Tong tien($)|\n");
         printf("----------------------------------------------------------\n");
    for (int i = 1; i <= 5; i++)
    {
       
         printf("| %d |%s\t\t\t|\t%d|\t%.0f|\t%.0f\n",i,sp[i].name,sp[i].mount,sp[i].prices,sp[i].total);

    }
    printf("----------------------------------------------------------\n");
    printf("                                                  %.0f\n",gia);
    printf("----------------------------------------------------------\n");
}
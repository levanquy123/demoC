#include <stdio.h>
#include <string.h>

struct Students
{
    char std_Name[100];
    char std_id[100];
    int std_age;
    char std_email[100];
};

void infoStudents(struct Students sdt1);

int main(int argc, char const *argv[])
{
    struct Students std1;
    // struct Students std2;
    // struct Students list[3];
    char name[50];
    char ID[50];
    int age[50];
    char email[50];
    
  
    strcpy(std1.std_Name,"LvQ");
    strcpy(std1.std_id,"nde18063");
    std1.std_age = 26;
    strcpy(std1.std_email,"Quytiber@gmail.com");
    infoStudents(std1);

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Nhap Ten Sv: ");
    //     gets(list[i].std_Name);
    //     printf("Nhap ID Sv: ");
    //     gets(list[i].std_id);
    //     printf("Nhap Tuoi Sv: ");
    //     scanf("%d",&list[i].std_age);
    //     fflush(stdin);
    //     printf("Nhap email Sv: ");
    //     gets(list[i].std_email);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    // printf("--------------\n");     +
    // printf("   Info Sinh Vien\n");
    // printf("- Ten Sinh Vien: %s\n", list[i].std_Name);
    // printf("- Ma Sinh Vien: %s\n", list[i].std_id);
    // printf("- Tuoi sinh vien: %d\n", list[i].std_age);
    // printf("- Gmail Sinh Vien: %s\n", list[i].std_email);
    // }
     return 0;
}
void infoStudents(struct Students sdt1){
    printf("--------------\n");     
    printf("   Info Sinh Vien\n");
    printf("- Ten Sinh Vien: %s\n", sdt1.std_Name);
    printf("- Ma Sinh Vien: %s\n", sdt1.std_id);
    printf("- Tuoi sinh vien: %d\n", sdt1.std_age);
    printf("- Gmail Sinh Vien: %s\n", sdt1.std_email);
}

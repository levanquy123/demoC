#include <stdio.h>
#include <string.h>

struct Students
{
    char std_Name[100];
    char std_id[100];
    int std_age;
    char std_email[100];
};

typedef struct book{
    
    char Book1[100];
    char Book2[100];
    
}book;

int main(int argc, char const *argv[])
{   
    //int a,*p;
    struct Students std1, *p_std1;

    p_std1 = &std1; 

    strcpy(std1.std_Name,"Lv Quy");
    strcpy(std1.std_id,"nde18063");
    std1.std_age = 26;
    strcpy(std1.std_email,"Quytiber@gmail.com"); 
    
    printf("Ten Sinh Vien: %s",p_std1->std_Name);
    
    book book1;
   
    return 0;
}

    
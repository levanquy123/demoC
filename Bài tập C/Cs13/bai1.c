#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *P;
    char str[100];
    P = fopen("LeQuy.txt","w+"); 

    fprintf(P,"LeVanQuy");
    

    
    fclose(P);

    return 0;
}

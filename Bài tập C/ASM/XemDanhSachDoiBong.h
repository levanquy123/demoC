#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void XemDanhSachDoiBong()
{
    FILE *fp;
 char buff[255];
      
 fp = fopen("Data.dat", "wb");
   fscanf(fp, "%s", buff);
   printf("1: %s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);
        // show content of file
       // printf("");
        // clear screen

        fclose(fp);

}
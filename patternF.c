#include<stdio.h>

 int main()
 {
     int hashes[]={6,1,1,5,1,1,6};
     int i,j;
     for(i=0;i<7;i++)
     {
         for(j=0;j<hashes[i];j++)
         {
             printf("#");
         }
        printf("\n");
     }
     return 0;
 }

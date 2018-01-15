#include<stdio.h>

int main()
{
    int no,r,i;
    //printf("Enter a Number : ");
    //scanf("%d",&no);
    //int copy_n = no;
    for(i=0;i<1000;i++)
    {
        no = i;
        int sum=0;
    while(no!=0)
    {
        r = no%10;
        sum = sum + r*r*r;
        no = no/10;
    }
    if(sum==i)
    {
            printf("\nGiven num is armstrong num : %d.\n",i);
    }
   /* else
    {
            printf("\nGiven num is not armstrong num : %d.\n",no);
    }
    }*/
}
    printf(" ");
    return 0;
}

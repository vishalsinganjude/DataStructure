#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,i;
    int count = 0;
    printf("Enter two Numbers : ");
    scanf("%d %d",&a,&b);
    for(x=a+1;x<=b-1;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)//for reminder 0
                break;
        }
        if(i==x)
        {
             printf(" %d  ",x);
             count++;
        }
    }
     printf("\nPrime Nums in between  %d and %d : %d.",a,b,count);
    return 0;
}

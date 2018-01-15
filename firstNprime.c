#include<stdio.h>

int main()
{
    int N,i;
    int x = 2;//smallest prime number.
    printf("Enter The N Number : ");
    scanf("%d",&N);
    while(N)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            {
                break;
            }
        if(i == x)
        {
            printf("%d  ",x);
            N--;
        }
        x++;
    }
    return 0;
}

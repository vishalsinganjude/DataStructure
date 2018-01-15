#include<stdio.h>

int main()
{
    int n,reminder;
    int x,sum;
    printf("Armstrong numbers are : \n\n");
    for(n=1;n<1000;n++)
    {
        sum = 0;
        x = n;
        while(x!=0)
        {
            reminder = x%10;//get last value of given number;
            sum = sum + reminder*reminder*reminder;
            x = x/10; //receives divided reduce number.
        }
        if(sum == n)
        {
                printf("%d  ",n);
        }
    }
    printf("\n");
    return 0;
}

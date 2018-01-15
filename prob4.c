#include<stdio.h>
int main()
{
    int num;
    printf("Given No : ");
    scanf("%d",&num);
    if( num%3 == 0)
    {
        printf("\nFizz\n");
    }
    if(num%5 == 0)
    {
        printf("\nBuzz\n");
    }
    if(num%3==0 && num%5==0)
    {
        printf("\nFizzBuzz\n");
    }
    return 0;
}

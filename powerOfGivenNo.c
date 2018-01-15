#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int num1 =num;
    num = num*num;
    printf("Power of Given num is : %d",num);
    num = sqrt(num);
    printf("\nSquare Root of Given num is : %d",num);
    return 0;
}

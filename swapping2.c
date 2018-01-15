#include<stdio.h>

int main()
{
    int a,b;
    printf("enter The elements to the Swap : \n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    /*a=a+b;
    b=a-b;
    a=a-b;*/
    a = a*b;
    b = a/b;
    a = a/b;
    printf("after Swap elements :\na = %d and b = %d",a,b);
}

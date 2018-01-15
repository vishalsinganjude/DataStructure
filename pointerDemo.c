#include<stdio.h>
int main()
{
    int a = 10;
    int *p=a;
    int **q;
   //p =&a;
    q = &p;
    //q = a;
    printf("%d ",*q);
    return 0;
}

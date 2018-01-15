#include<stdio.h>

int main()
{
    int data1,data2;
    int *ptr1,*ptr2;
    printf("Enter First No : ");
    scanf("%d",&data1);
    printf("Enter Second No : ");
    scanf("%d",&data2);
    ptr1 = &data1;
    ptr2 = &data2;
    printf("Ptr1 = %d and ptr2 = %d.\n",*ptr1,*ptr2);
    return 0;
}

#include<stdio.h>

int main()
{
    int temp,y=0,r;
    printf("Enter A Number : ");
    scanf("%d",&temp);
    int a= temp;
    while(a)
    {
        r = a % 10; //getting last number of given number.
        y = y * 10 + r;//add one by one numbers
        a = a/10; //for deleting last number of given number.
    }
    if(temp==y)
    {
        printf("Given no is Palindrome");
        //printf("Reverse a Given number : %d",y);
    }
    return 0;
}

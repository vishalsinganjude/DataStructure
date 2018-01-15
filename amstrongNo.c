#include<stdio.h>

int main()
{
    int num,givenNo,result=0,reminder;
    printf("Enter No : ");
    scanf("%d",&num);
    givenNo = num;
    while(num!=0)
    {
            reminder = num%10;
            result = result+reminder*reminder*reminder;
            num = num/10;
    }
    if(result==givenNo)
    {
        printf("\t%d  is Amstrong.",result);
    }
    else
        printf("\t%d is not Amstrong.",result);
}

#include<stdio.h>

int main()
{
    int divisor,dividend,reminder,quotient;
    printf("\nDividend : ");
    scanf("%d",&dividend);
    printf("\nDivisor : ");
    scanf("%d",&divisor);
    reminder = dividend%divisor;
    printf("\nReminder is : %d ",reminder);
    quotient = dividend/divisor;
    printf("\nQuotient is : %d ",quotient);
}

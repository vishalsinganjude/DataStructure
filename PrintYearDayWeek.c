#include<stdio.h>

int main()
{
    int day,week,year;
    printf("Numbers of days : ");
    scanf("%d",&day);
    year = day/365;
    week = (day-(year*365))/7;
    day = day-((year*365)+(week*7));
    printf("Years : %d\n",year);
    printf("Weeks : %d\n",week);
    printf("Days : %d\n",day);
    return 0;
}

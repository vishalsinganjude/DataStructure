#include<stdio.h>
//int  pwr(register int m, register int e);
int series(void);
void   sp_to_dash(const char *str);
int main()
{
    extern int first,last;
    int x=1;
    ++x;
    printf("%d\n",x);
    x--;
    printf("%d\n",x);
    series();
    printf("%d %d\n",first,last);
    sp_to_dash("This is a test.");
    return 0;
}
/*int pwr(register int m, register int e)
{
register int temp;
temp = 1;
for(; e; e--)
    temp = temp * m;
    printf("%d\n",temp);
return temp;
}*/
int first=10,last=40;
void sp_to_dash(const char *str)
{
    while(*str)
    {
        if(*str== ' ')
            //*str = '-';
            printf("%c",'-');
        else
            printf("%c",*str);
        str++;
    }
}
int series(void)
{
    static int series_num=10;
    series_num = series_num+23;
    printf("%d\n",series_num);
    return series_num;
}


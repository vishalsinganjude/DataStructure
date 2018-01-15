#include<stdio.h>
char get_char_from_modem(void);
int xor(int a, int b);
int main (void)
{
//int a=10,b=20,c=30;
//int d = ((a<b)&&(a<c)||(b>c)&&(a>20));
int i=-1,j=-1,k=0,l=2,m,a;
m= i++ && j++ && k++ || l++;
printf("%d %d %d %d %d\n",i,j,k,l,m);
printf("%d\n",1 && -1);
printf("%d", xor(1, 0));
printf("%d", xor(1, 1));
printf("%d", xor(0, 1));
printf("%d\t\v", xor(0, 0));
for(a=20,a=10;a<=20;a++)
    printf("\n\n%d",a);
return 0;
}
int xor(int a, int b)
{
return (a || b)&& !(a && b);
}

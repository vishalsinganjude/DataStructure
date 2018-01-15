#include <stdio.h>
int f1(int n);
int f2(void);
int main(void)
{
int t;
printf("Enter a number: ");
scanf("%d", &t);
/* print proper message */
t ? f1(t) + f2() : printf("zero entered.");
printf("\n");
return 0;
}
int f1(int n)
{
printf("%d ", n);
return 0;
}
int f2(void)
{
printf("entered ");
return 0;
}

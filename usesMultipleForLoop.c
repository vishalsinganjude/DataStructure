#include <stdio.h>
int sqrnum(int num);
int readnum(void);
int prompt(void);
int main(void)
{
int t,x;
const char *s;
//for( ; ; )
//    printf("Its Infinite Rule.");
char ch = '\0';
for( ; ; )
{
ch = getchar(); /* get a character */
if(ch == 'A')
    break; /* exit the loop */
}
printf("you typed an A");
for(x=0; x != 123; )
    scanf("%d", &x);
gets(s); /* read a string into s */
if(*s)
    x = strlen(s); /* get the string's length */
else
    x = 10;
for( ; x < 10; ) {
    printf("%d", x);
    ++x;
}
for(prompt(); t=readnum(); prompt())
    sqrnum(t);
return 0;
}
int prompt (void)
{
printf("Enter a number: ");
return 0;
}
int readnum (void)
{
int t;
scanf("%d", &t);
return t;
}
int sqrnum(int num)
{
printf("%d\n", num*num);
return num*num;
}

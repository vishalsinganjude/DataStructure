#include <stdio.h>
#include <string.h>
void pad(char *s, int length);
int main(void)
{
    int num;
char str[80];
//strcpy(str, "this is a test");
//pad(str, 49);
//printf("%d", strlen(str));
do {
scanf("%d", &num);
//printf("This is greter number.");
} while(num > 100);
printf("This is lesser number.");
return 0;
}
/* Add spaces to the end of a string. */
/*void pad(char *s, int length)
{
int l;
l = strlen(s); /* find out how long it is */
/*while(l < length) {
s[l] = ' '; /* insert a space */
/*l++;
}
s[l]= '\0'; /* strings need to be terminated in a null */
//2}

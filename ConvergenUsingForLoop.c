#include <stdio.h>
#include <string.h>
void converge(char *targ, char *src);
void sign_on(void);
int main(void)
{
char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXX";
converge(target, "This is a test of converge().\n");
printf("Final string: %s\n", target);
sign_on();
return 0;
}
void sign_on(void)
{
    char str[20];
int x;
for(x=0; x<3 && strcmp(str, "password"); ++x) {
printf("Enter password please:");
gets(str);
}
if(x == 3) return;
/* else log user in . . . */
}
/* This function copies one string into another.
It copies characters to both the ends,
converging at the middle. */
void converge(char *targ, char *src)
{
int i, j;
printf("%s\n", targ);
for(i=0, j=strlen(src); i<=j; i++, j--) {
targ[i] = src[i];
targ[j] = src[j];
printf("%s\n", targ);
}
}

#include <stdio.h>
#include <string.h>
int main(void)
{
char s1[80], s2[80];
gets(s1);
gets (s2);
printf("lengths: %d %d\n", strlen(s1), strlen(s2));
if(!strcmp(s1, s2))
    printf("The strings are equal\n");
strcat(s1, s2);
printf ("%s\n", s1);
strcpy(s1, "This is a test.\n");
    printf(s1);
if(strchr("hello", 'e'))
    printf("e is in hello\n");
if(strstr("hi there", "hi"))
    printf("found hi");
return 0;
}

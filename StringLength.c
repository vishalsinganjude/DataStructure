#include<stdio.h>
int main()
{
    int i;
    char s[20];
    printf("Enter A string : ");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++);
    printf("String length is : %d",i);
    return 0;
}

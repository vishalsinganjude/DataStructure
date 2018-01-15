#include<stdio.h>
int main()
{
    char s[20];
    int i,l;
    printf("Enter A String : ");
    scanf("%s",s);

    l = strlen(s);
    printf("\nLength is  %d ",l);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            printf("\nString is not palindrome.\n");
            break;
        }
    }
    if(i==l/2)
    {
        printf("\nString is palindrome.\n");
    }
    return 0;
}

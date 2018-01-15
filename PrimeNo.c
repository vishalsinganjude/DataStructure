#include<stdio.h>
#include<math.h>
int main()
{
    int i,no,ans;
    printf("Enter A Number : ");
    scanf("%d",&no);
    //for(i=0;i<no-1;i++)
    for(i=2;i<=no-1;i++)
    {
        if(no%i == 0)
            break;
    }
    if(i == no)
    {
             printf("Given Num is Prime Number.");
    }
    else
        printf("Number is not  Prime.");
    return 0;
}

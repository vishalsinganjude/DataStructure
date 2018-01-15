#include <stdio.h>
int main(void)
{
    /*int a,b,c;
    printf("Input the First Integer : ");
    scanf("%d",&a);
    printf("\nInput the second Integer : ");
    scanf("%d",&b);
    c = a+b;
    printf("\nAddition of Two Numbers : %d.\n",c);
    int d = a*b;
    printf("\n Multiplication of Two Numbers : %d.\n",d);
    int e = a/b;
    printf("\n Division of Two Numbers : %d.\n",e);
    int f = a-b;
    printf("\n Substraction of Two Numbers : %d.\n",f);
    return 0;*/
    double a,b,c,d,e;
    printf("Weight - Item1: ");
    scanf("%lf",&a);
    printf("No. of item1: ");
    scanf("%lf",&b);
    printf("Weight - Item2: ");
    scanf("%lf",&c);
    printf("No. of item1: ");
    scanf("%lf",&d);
    e = ((a*b)+(c*d))/(b+d);
    printf("Average Value = %lf .",e);
}

//}


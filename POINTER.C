#include<stdio.h>
void changeptr(int **p1,int **p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int num1,num2;
	int *ptr1,*ptr2;
	clrscr();
	printf("Enter Num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	scanf("%d",&num2);
	ptr1=&num1;
	ptr2=&num2;
	printf("\nBefore Swapping...\n");
	printf("ptr1 = %d and ptr2 = %d.",*ptr1,*ptr2);
	changeptr(&ptr1,&ptr2);
	printf("\n\nAfter Swapping...");
	printf("\nptr1 = %d and ptr2 = %d.",*ptr1,*ptr2);
	getch();
	return 0;
}
#include<stdio.h>
void buble_sort(int a[]);
int main()
{
    int i;
    int a[]={9,8,6,5,4,3,21};
  //  printf("Enter the elements U want to insert : ");
    //scanf("%d",&a);
    for(i=0;i<7;i++)
    {
        display(&a[i]);
       // printf("Enter Elements : ");
        //scanf("%d",&a[i]);
    }
return 0;
}
void display(int *m)
{
    show(&m);
    //printf("%d ",*m);
}
void show(int **n)
{
    printf("%d\t",**n);
}
void buble_sort(int a[])
{
        int i,j,temp;
        int n = sizeof(a)/sizeof(a[0]);
        for(i=0;i<n;i++)
        {
            for(j=1;j<n-1-i;j++)
            {
                   if(a[j]>a[j+1])
                   {
                       temp = a[j];
                       a[j] = a[j+1];
                       a[j+1] = temp;
                   }
            }
        }
}


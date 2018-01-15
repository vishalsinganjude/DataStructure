#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
 }
 int partition(int a[],int start,int end)
 {
     int pivot = a[end];
     int i = start -1;
     for(int j=start;j<end-1;j++)
     {
         if(a[j]<pivot)
         {
             i++;
             swap(&a[i], &a[j]);
         }
     }
     swap(&a[i+1], &a[end]);
     return i+1;
 }
 void quickSort(int a[],int start, int end)
 {
     int part = partition(a, start, end);
     quickSort(a, start, part-1);
     quickSort(a, part+1, end);
 }
 void print(int a[], int size)
 {
     int i;
     for(i=0;i<size;i++)
     {
         cout<<"Array is : "<<a[i];
     }
     cout<<"\n";
 }
 int main()
{
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a, 0, n-1);
   cout<<"Sorted Array : "<<n<<"\t";
    print(a, n);
    return 0;
}

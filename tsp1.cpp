#include<iostream>
#include<stdlib.h>

using namespace std;

int least(int c);
int a[20][20],visited[10],n;
int cost=0;

void get()
{
    int i,j;
    cout<<"\nEnter No of Cities:";
    cin>>n;
    cout<<"Enter cost Matrix: \n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter Elements of Row: ";
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        visited[i]=0;
    }
    cout<<"The cost matrix is : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\n\n";
        for(j=0;j<n;j++)
        {
            cout<<"\t"<<a[i][j];
        }
    }
}
void minicost(int city)
{
    int i,ncity;
    visited[city]=1;
    cout<<"==="<<city+1;
    ncity=least(city);
    if(ncity==999)
    {
        ncity = 0;
        cout<<"\n"<<city+1;
        cost+= a[city][ncity];
        return;
    }
    minicost(ncity);
}
int least(int c)
{
    int i;
    int nc=999;
    int min = 999,kmin;
    for(i=0;i<n;i++)
    {
        if(a[c][i]!=0 && (visited[i]=0))
        {
            if(a[c][i]<min)
            {
                min=a[i][0]+a[c][i];
                kmin=a[c][i];
                nc=i;
            }
        }
    }
    if(min!=999)
    {
        cost+=kmin;
        return nc;
    }
}
void put()
{
    cout<<"\n\nMinimum cost:";
    cout<<cost;
}
int main()
{
    get();
    cout<<"\n\nThe Path is :\n\n";
    minicost(0);
    put();
    return 0;
}


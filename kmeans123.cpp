#include<iostream>
#include<stdlib.h>
#include<vector>
#include<math.h>

using namespace std;
static int n;
static int k;
static int iterationCount = 0;

class Kmean
{
public:

    int items[100];
    vector<int> clusterHeadHolder;
    vector<int> newClusterHeadHolder;
    vector< vector<int> > cluster;

    void setItems();
    void printItems();
    void setClusters();
    void setClusterHeadValues();
    int compareItems(int item);
    void createCluster();
    void viewCluster();
    void setNewClusterHeadValues();
    bool compareClusterHead();
    void resetClusterHead();
};

void Kmean :: setItems()
{
    int n;
    cout<<"Enter no of items : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int in;
        cout<<"Enter items: ["<<i<<"] : ";
        cin>>in;
        items[i]= in;
    }
}

void Kmean :: printItems()
{
    cout<<endl<<"Items : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Items ["<<i<<"] :"<<items[i]<<endl;
    }
}

void Kmean :: setClusters()
{
    cout<<"How Many Clusters U want to create :"<<endl;
    cin>>k;
    clusterHeadHolder.resize(k);
    newClusterHeadHolder.resize(k);
}

void Kmean :: setClusterHeadValues()
{
    for(int i=0;i<k;i++)
    {
        int holder;
        cout<<"Enter header for Cluster "<<i+1<<" : ";
        cin>>holder;
        clusterHeadHolder[i]=holder;
    }
}
int Kmean :: compareItems(int item)
{
    int temp[i];
    for(int i=0;i<k;i++)
    {
        temp[i]=abs(item-clusterHeadHolder[i]);
    }
    cout<<endl;
    int min=temp[0];
    int selectedCluster=0;
    for(int i=0;i<n;i++)
    {
        if(temp[i]<=min)
        {
            min = temp[i];
            selectedCluster = clusterHeadHolder[i];
        }
    }
    return selectedCluster;
}
void Kmean :: createCluster()
{
    cout<<".............................................................";
    iterationCount++;
    cout<<"Iteration : "<<iterationCount<<endl;
    cluster.clear();
    cluster.resize(n);
    for(int i=0;i<n;i++)
    {
        int item = items[i];
        int min = compareItems(item);
        for(int j=0;j<k;j++)
        {
            if(min == clusterHeadHolder[j])
            {
                cout<<item<<"added in cluster."<<endl;
                cluster[j].push_back(item);
            }
        }
    }
    cout<<endl;
}
void Kmean :: viewCluster()
{
    for(int i=0;i<cluster.size();i++)
    {
        for(int j=0;j<cluster[i].size();j++)
        {
            cout<<"items in :"<<i<<"at Position : "<<j<<"is :"<<cluster[i][j]<<endl;
        }
    }
    cout<<endl;
}
void Kmean :: setNewClusterHeadValues()
{
    for(int i=0;i<k;i++)
    {
        int sum = 0;
        for(int j=0;j<cluster[i];j++)
        {
            sum = sum + cluster[i][j];
        }
        newClusterHeadHolder[i]= round(sum/cluster[i].size());
    }
    for(int i=0;i<k;i++)
    {
        cout<<"old cluster :"<<
        cout<<"new Cluster :"<<
    }
}

//Name : Yamendra B Singanjude
// Computer Laboratory-I
//Elective-I D : Implement a simple approach for k-means clustering using C++.

#include <iostream>
#include<stdlib.h>
#include<vector>
#include<Math.h>

using namespace std;

static int n;							//No. of Iteams
static int k;							//No. of Clusters
static int iterationCount = 0;			//count for Iterations

class Kmean{
	public :
	//variables
	int items[100];						//Item Holders
	vector<int> clusterHeadHolder;		//Current Cluster head
	vector<int> newClusterHeadHolder;	//Vector For Holding new Cluster Head Values
	vector< vector<int> > cluster;		//Vector for holding Clusters

	//methods
	void setItems();					//Input Items From User
	void printItems();					//Print Item
	void setClusters();					//Input How many cluster user want to create
	void setClusterHeadValues();		//Input Initial Cluster Head Values
	void createClusters();				//Insert Item in appropriate cluster
	int compareItem(int item);			//This function calculate an item's distance from all cluster head and return cluster with minimum distance
	void viewCluster();					//Display/print Clusters
	void setnewClusterHeadValues();		//Calculate New Cluster Heads
	bool compareClusterHeads();			//Compare old Cluster Head and new Cluster Head, Exit if same
	void resetClusterHead();			//if not same this function make the new cluster head -> current cluster head
};

void Kmean :: setItems()
{
	cout<<"\nEnter Number Of Items : ";
	cin>>n;
	cluster.resize(n);
	for(int i = 0; i < n; i++)
	{
	    int in;
		cout<<"Enter Item ["<<i<<"] : ";
		cin>>in;
		items[i] = in;
	}
}

void Kmean :: printItems()
{
	cout<<endl<<"Items : "<<endl;
	for(int i = 0; i < n; i++)
		{
			cout<<"Item ["<<i<<"] : "<<items[i]<<endl;
		}
}

void Kmean :: setClusters()
{
	cout<<"Enter how many Clusters you want to create : "<<endl;
	cin>>k;
	clusterHeadHolder.resize(k);		//resizing Vector clusterHeadHolder
	newClusterHeadHolder.resize(k);		//resizing Vector newClusterHeadHolder
}

void Kmean :: setClusterHeadValues()
{
	for(int i = 0; i < k; i++)
	{
		int holder;
		cout<<"enter Header for cluster "<<i+1<<" : ";
		cin>>holder;
		clusterHeadHolder[i] = holder;
	}
}

int Kmean :: compareItem(int item)
{
	int temp[k];

	for(int i = 0; i < k; i++)
	{
		temp[i] = abs(item - clusterHeadHolder[i]);			//Calculating and storing distance of Item from cluster heads
	}
	cout<<endl;
	//Logic for selecting cluster with minimum distance
	int min = temp[0];
	int selectedCluster = 0;
	for(int i = 0; i < k; i++)
		{
			if(temp[i] <= min)
			{
				min = temp[i];
				selectedCluster = clusterHeadHolder[i];
			}
		}
	return selectedCluster;
}

void Kmean :: createClusters()
{
	cout<<"------------------------------------------------------------------";
	iterationCount++;
	cout<<endl<<endl<<"Iteration : "<< iterationCount<<endl;
	cluster.clear();		//Making Vector empty for storing new Items as per distance from Cluster head
	cluster.resize(n);		//resizing vector
	for(int i = 0; i < n; i++)
	{
		int item = items[i];
		int min = compareItem(item);		//call to compareItem
		//cout<<"Min is "<< min <<endl;
		for(int j = 0; j < k; j++)
		{
			if(min == clusterHeadHolder[j])
			{
				cout<<item<<" added in cluster "<<j;//<<endl;
				cluster[j].push_back(item);					//Adding Item in Cluster with min distance
			}
		}
	}
	cout<<endl;
}

void Kmean :: viewCluster()
{
	cout<<endl;
	for(int i = 0; i < cluster.size(); i++)
	{
		for(int j = 0; j < cluster[i].size(); j++)
		{
				cout<<"Items in Cluster "<<i<<" : at position "<<j<<" is : "<<cluster[i][j]<<endl;
		}
	}
	cout<<endl;
}

void Kmean :: setnewClusterHeadValues()
{
for(int i = 0; i < k; i++)
	{
		int sum = 0;
		for(int j = 0; j < cluster[i].size(); j++)
		{
			sum = sum + cluster[i][j];
		}
		newClusterHeadHolder[i] = round(sum/cluster[i].size());
	}
		for(int i = 0; i < k; i++)
		{
			cout<<"Old Cluster Head "<<i<< " was:\t"<<clusterHeadHolder[i]<<endl;
			cout<<"New Cluster Head "<<i<<" is:\t"<<newClusterHeadHolder[i]<<endl;
		}
}
bool Kmean :: compareClusterHeads()
{
	bool flag = false;
	for(int i = 0; i < k; i++)
	{
		if(clusterHeadHolder[i] == newClusterHeadHolder[i])
		{
			flag = true;
		}
		else
		{
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
	cout<<"\nClustering Complete"<<endl;
	return false;
	}
	else
	{
	cout<<"\nClustering Not complete"<<endl;
	resetClusterHead();
	return true;
	}
}

void Kmean :: resetClusterHead()	//Function gets called after a iteration where, current head != newhead. Here we assign new Head as Current head
{
	clusterHeadHolder.clear();
	clusterHeadHolder.resize(k);
	for(int i = 0; i < k; i++)
	{
		clusterHeadHolder[i] = newClusterHeadHolder[i];
	}
		for(int i = 0; i < k; i++)
	{
		cout<<"New Head "<<i<<" :\t" <<clusterHeadHolder[i]<<endl;
	}
	newClusterHeadHolder.clear();
	newClusterHeadHolder.resize(k);
}


int main()
{
	Kmean kmean;
	kmean.setItems();
	//kmean.printItems();
	kmean.setClusters();
	kmean.setClusterHeadValues();
	do{
		kmean.createClusters();
		kmean.viewCluster();
		kmean.setnewClusterHeadValues();
	}while(kmean.compareClusterHeads() == true);
	cout<<"Iterations = "<<iterationCount;
	return 0;
}

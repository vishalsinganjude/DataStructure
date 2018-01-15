#include<stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
}n;

typedef struct Queue
{
    n *front;
     n *rear;
}q;

n* createNode(int data)
{
    n* newNode = (n*)malloc(sizeof(n));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
q * createQueue()
{
    q * que = (q*)malloc(sizeof(q));
    que->front = NULL;
    que->rear = NULL;
    return que;
}
void enQueue(q *Q,int data)
{
    n * newNode = createNode(data);
    //n *temp = createNode(NULL);
    if(Q->rear==NULL)
    {
        Q->front = newNode;
        Q->rear = newNode;
    }
    //temp = Q->rear;
    Q->rear->next = newNode;
    Q->rear = newNode;
}
q * deQueue(q * Q)
{
        n * temp = Q->front;
        if(Q->front==NULL)
            return;
        if(Q->front==Q->rear)
        {
            Q->front = NULL;
            Q->rear = NULL;
            return;
        }
        Q->front=Q->front->next;
        return temp;
}
int front(q *Q)
{
    if(Q->front==NULL)
    {
        return 0;
    }
    return Q->front->data;
}
int rear(q *Q)
{
    if(Q->rear==NULL)
    {
        return 0;
    }
    return Q->rear->data;
}
int main()
{
    n *res = NULL;
    q *Que = createQueue();
    int data;
    while(1)
    {
        int ch;
        printf("\n1.Insert at Queue.\n2.Delete at Queue.\n3. Get Front of Queue.\n4.get rear of Queue.\n5.Print all data.\nEnter Your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
           // enQueue();
            break;
        }
    }
    enQueue(Que,10);
    enQueue(Que,20);
    enQueue(Que,30);
    enQueue(Que,40);
    //res = Que->front;
    printf("Created Queue is :");
    printf(" %d ",Que->front->data);
    printf("  %d",Que->front->next->data);
    printf("  %d",Que->front->next->next->data);
    printf("  %d",Que->front->next->next->next->data);
    res = deQueue(Que);
    printf("\nDeleted data is : %d",res->data);
    //}
    return 0;
}

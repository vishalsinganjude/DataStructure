#include<stdio.h>
#include<limits.h>
typedef struct Node
{
    void *key;
    struct Queue *next;
}Node;
typedef struct Queue
{
    Node *front;
    Node *rear;
}Queue;

Node *createNode(int *key)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->key = key;
    temp->next = NULL;
    return temp;
}
Queue *createQueue()
{
    Queue *q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}
void enQueue(Queue *q,int *key)
{
    Node *newNode = createNode(key);
    if(q->front==NULL)
    {
        q->front = newNode;
        q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
}
Node *deQueue(Queue *q)
{
    Node *temp = q->front;
    if(q->front == NULL)
    {
        return;
    }
    if(q->front == q->rear)
    {
        q->front = NULL;
        q->rear = NULL;
        return;
    }
    q->front = q->front->next;
    return temp;
}
int *front(Queue *q)
{
    if(q->front==NULL)
    {
        return INT_MIN;
    }
    return q->front->key;
}
int *rear(Queue *q)
{
    if(q->rear == NULL)
    {
        return INT_MIN;
    }
    return q->rear->key;
}
int main()
{
    Node * result = NULL;
    Queue *q = createQueue();
    enQueue(q,10);
    enQueue(q,20);
    result = deQueue(q);
    printf("Deleted element is %d",result->key);
    printf("front element is %d",front->key);
    printf("Rear Element is %d",rear->key);
    return 0;
}

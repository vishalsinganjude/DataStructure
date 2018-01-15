#include<stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int createNode(int data)
{
    Node *newnode=(Node *)malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertAtFirst(Node* *tail,int data)
{
    Node *thead = createNode(data);
    if(*tail==NULL)
    {
        *tail=thead;
        return;
    }
    (*tail)->next = thead;
    (thead) ->next = (*tail)->next;
}
int main()
{
    Node *CLL;
    int data;
    insertAtFirst(&CLL,40);
}

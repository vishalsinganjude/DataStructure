#include<stdio.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *next;
}node;
node * createNode(int data)
{
    node *tnode = (node *)malloc(sizeof(node));
    tnode->data = data;
    tnode->next = NULL;
    return tnode;
}
int traverseList(node *head)
{
    node * thead = head;
    int count = 0;
    printf("Count is %d\n",count);
    while(thead!=NULL)
    {
        count ++;
        thead = thead->next;
    }
    return count;
}
void insertAtFirst(node **head,int data)
{
    node * newNode = createNode(data);
    if(*head==NULL)
        return;
    newNode->next = *head;
    *head = newNode;
}

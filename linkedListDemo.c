#include<stdio.h>
typedef struct Node
{
    int data;
    struct Node *next;
}node;

void insertAtFirst(node **head,int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if(*head==NULL)
    {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    *head = newNode;
}
void printList(node *h)
{

    if(h==NULL)
    {
        return;
    }
   while(h != NULL)
   {
       printf("%d -> ", h->data);
       h = h->next;
   }
}
int main()
{
    node *head=NULL;
    /*head = (node *)malloc(sizeof(node));
    node *two = (node *)malloc(sizeof(node));
    node *three = (node *)malloc(sizeof(node));
    printf("\nCreated Linked List is : "," ");
    head->data = 1;
    head->next  = two;
    two->data = 6;
    two->next = three;
    three->data = 3;
    three->next = NULL;*/
   // printList(head);
    printf("\nAfter InsertAt first in Linked List is : \n");
    insertAtFirst(&head,19);
    insertAtFirst(&head,39);
    printList(head);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *link;
}Node;

Node *head = NULL;
//For Creating Node
Node *createNode(int data)
{
    Node* newnode = (Node *)malloc(sizeof(Node));
    newnode ->data = data;
    newnode ->link = NULL;
    return newnode;
}
//For insert at First
void insertAtFirst(Node* *h1,int data)
{
    Node *tnode = createNode(data);
    if(*h1==NULL)
    {
        *h1 = tnode;
        printf("Insert At The First.\n");
        return;
    }
    tnode->link = *h1;
    *h1 = tnode;
    printf("Inserted Successfully.\n");
}
//for Insert at last
void insertAtLast(Node* *h1,int data)
{
    Node* tnode = createNode(data);
    Node* thead =*h1;
    if(*h1 == NULL)
    {
        *h1 = tnode;
        printf("Inserted at the Last Successfully.");
        return;
    }
    while(thead->link != NULL)
    {
        thead = thead ->link;
    }
    thead->link = tnode;
    printf("Inserted At the Last Successfully.\n");
}
//for insert after node
int insertAfterNode(Node* *h1,int targetData,int data)
{
    Node *thead,*tnode;
    if(*h1==NULL) { printf("Linked List is Empty.\n"); return -1; }
    thead = *h1;
    while (thead != NULL && thead->data != targetData)
    {
        thead = thead->link;
    }
    if(thead == NULL){ printf("Target data Not Found.\n"); return -1; }
    tnode = createNode(data);
    tnode->link = thead->link;
    thead->link = tnode;
    return 1;
}
//For insert at Before node;
int insertBeforeNode(Node* *h1,int targetdata,int data)
{
    Node *tnode,*thead,*prev;
    if(*h1 == NULL){printf("Linked list is empty.\n"); return -1;}
    if((*h1)->data == targetdata)
    {
        tnode = createNode(data);
        tnode->link = *h1;
        *h1 = tnode;
        return 1;
    }
    prev = *h1;
    thead = (*h1)->link;
    while(thead != NULL && thead->data == targetdata)
    {
        prev = thead;
        thead = thead->link;
    }
    if(thead == NULL){ printf("Target data Not Found.\n"); return -1; }
    tnode = createNode(data);
    prev->link = tnode;
    tnode->link = thead;
    return 1;
}
int deleteNode(Node* *h1, int targetdata)
{
	Node *thead,*prev;
	thead = *h1;
	if(*h1 == NULL){printf("LinkedList is Empty!");	return -1;}
	if((*h1)->data == targetdata)
	{
		*h1 = thead->link;
		free(thead);
		return 1;
	}
	while(thead != NULL && thead->data != targetdata)
	{
		prev = thead;
		thead = thead->link;
	}
	if(thead == NULL){printf("Target Not Found!");	return -1;}
	prev->link = thead->link;
	free(thead);
	return 1;
}
void displayLinkList(Node* h)
{
    printf("Displays The Created Linked List : \n");
    if(h == NULL){ printf("Current Linked List is Empty.\n"); return -1;}
    while(h != NULL)
    {
        printf("%d",h->data);
        if(h->link != NULL)
        {
            printf("--->");
        }
        h = h->link;
    }
    printf("\n\n");
}
int acceptData(char *c)
{
    int a;
    printf("%s",c);
    scanf("%d",&a);
    return a;
}
//Main Function
int main()
{
    Node *head;
    int choice = 0;
    head = NULL;
    printf("Initially Head is %d.\n",head);
    while(1)
    {
        printf("\n1. Insert At the First.\n2. Insert At The Last.\n3. Insert After Some Node.\n4. Insert Before Some Node.\n5. Delete a Node.\n6. Display The Entire Link List.\n7. Exit.\n");
        choice = acceptData("Enter your choice : ");
        switch(choice)
        {
            int data,tdata,result;
            case 1:
                data = acceptData("Enter data u want to insert : ");
                insertAtFirst(&head,data);
                break;
            case 2:
                data = acceptData("Enter data u want to insert : ");
                insertAtLast(&head,data);
                break;
            case 3:
                tdata = acceptData("Enter target data : ");
                data = acceptData("Enter data u want to insert : ");
                result = insertAfterNode(&head,tdata,data);
                if(result == 1){printf("\n\n%d added Successfully after some node.",data); break;}
                printf("\nFailed to add data.\n");
                break;
            case 4:
                tdata = acceptData("\nEnter target data : ");
                data = acceptData("Enter data u want to insert : ");
                result = insertBeforeNode(&head,tdata,data);
                if(result==1){printf("\n\n%d Added Successfully Before some node",data); break;}
                printf("Failed to add Data.\n");
                break;
            case 5:
                tdata = acceptData("Enter data u want to Delete : ");
                result = deleteNode(&head,tdata);
                if(result==1){printf("Deleted Successfully.\n"); break;}
                printf("Failed to delete.");
                break;
            case 6:
                displayLinkList(head);
                break;
            case 7:
                return 0;
                break;
            default:
                printf("Invalid Choice.\n");
        }
    }
    return 0;
}

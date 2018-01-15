#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

typedef struct StackNode
{
    void *data;
    struct StackNode *next;
}sNode;

sNode* createStack(void *data)
{
    sNode *newStack = (sNode *)malloc(sizeof(sNode));
    newStack->data =data;
    newStack->next = NULL;
    return newStack;
}
void push(sNode **top,void *data)
{
    sNode *newStack = createStack(data);
    printf("data : %d\n",*newStack);
    /*if(isEmpty(*top))
    {
        *top = newStack;
        return;
    }*/
    newStack->next = *top;
    *top = newStack;
}
int isEmpty(sNode *top)
{
    return !top;
}
int pop(sNode **top)
{
    sNode *tnode = *top;
    void *temp;
    if(isEmpty(*top))
    {
        return INT_MIN;
    }
    temp = tnode->data;
    *top = (*top)->next;
    free(tnode);
    return temp;
}
int peek(sNode *top)
{
    if(isEmpty(top))
        return INT_MIN;
    return top->data;
}
int main()
{
    sNode *top = NULL;
    push(&top,20);
    push(&top,30);
    push(&top,40);
    push(&top,3);
    printf("\nPopped Element is %d.",pop(&top));
    printf("\nTop Element is %d.\n",peek(top));
    return 0;
}


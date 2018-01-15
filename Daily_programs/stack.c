#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
typedef struct stack
{
    void * data;
    struct stack  *next;
    struct stack *top;
}s;

s * createStack(void * data)
{
    s *newStack = (s *)malloc(sizeof(s));
    newStack->data = data;
    newStack->next = NULL;
    return newStack;
}
void push(s **tTop,void * data)
{
    s * newStack = createStack(data);
    printf("data : %d ",*newStack);
    newStack -> next = *tTop;
    *tTop = newStack;
}
int pop(s **top)
{
    s *temp_top = *top;
    int temp;
    if(isEmpty(*top))
    {
        return INT_MIN;
    }
    temp = temp_top->data;
    *top = (*top)->next;
    free(temp_top);
    return temp;
}
void isEmpty(s *top)
{
    return !top;
}
int main()
{
    s *top =NULL;
    push(&top,4);
    push(&top,5);
    printf("Current Top Is : %d",*top);
    return 0;
}

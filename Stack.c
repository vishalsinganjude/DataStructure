#include<stdio.h>

typedef struct Stack
{
    int capacity;
    int top;
    int *array;
}Stack;

Stack *createStack(int cap)
{
    Stack *newStack;
    newStack = malloc(sizeof(Stack));
    newStack->capacity = cap;
    newStack->top = -1;
    newStack->array = malloc(sizeof(int)*newStack->capacity);
    return newStack;
}
int isFull(Stack *newStack)
{
    if(newStack->top == newStack->capacity-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
isEmpty(Stack *newStack)
{
    if(newStack->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(Stack *newStack,int data)
{
    if(!isFull(newStack))
    {
        newStack->top++;
        newStack->array[newStack->top]=data;
    }
}
int pop(Stack *newStack)
{
    int data;
    if(!isEmpty(newStack))
    {
        data = newStack->array[newStack->top];
        newStack->top--;
        return data;
    }
    return -1;
}
void peek(Stack *newStack)
{
    if(isEmpty(newStack))
    {
        printf("\nStack is Empty.");
    }
    else
    {
        printf("\nPeek Element : %d.",newStack->array[newStack->top]);
    }
}
void traverse(Stack *newStack)
{
    if(isEmpty(newStack))
    {
        printf("\nStack is Empty.");
    }
    else
    {
        int i;
        printf("Stack Elements are :\n");
        for(i=0;i<=newStack->top;i++)
        {
            printf("%d\n",newStack->array[i]);
        }
    }
}
int main()
{
    int choice,data;
    Stack *newStack;
    newStack = createStack(5);
    while(1)
    {
        printf("\n1. Push on the Stack.");
        printf("\n2. Pop of Stack.");
        printf("\n3. Peek of Stack.");
        printf("\n4. Display of Stack.");
        printf("\n5. Exit.");
        printf("\n Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n Enter an Element : ");
            scanf("%d",&data);
            push(newStack,data);
            break;
        case 2:
            data = pop(newStack);
            if(newStack == -1)
            {
                printf("Stack is Empty.");
            }
            else
            {
                printf("Poped data is %d.",data);
            }
            break;
        case 3:
            peek(newStack);
            break;
        case 4:
            traverse(newStack);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Entry.");
        }
    }
    getch();
}

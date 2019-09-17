#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node* link;
} Node;


typedef struct stack
{
    int count;
    Node* top;
} Stack;


Stack* createStack();
void pushStack(Stack* stack, int data);
void display(Stack* stack);


int main()
{
    Stack* stack = createStack();

    pushStack(stack, 10);
    display(stack);
    pushStack(stack, 20);
    display(stack);
    pushStack(stack, 30);
    display(stack);

    return 0;
}


Stack* createStack()
{
    Stack* stack = (Stack*) malloc(sizeof(Stack));

    if (stack)
    {
        stack->top = NULL;
        stack->count = 0;
    }

    return stack;
}


void pushStack(Stack* stack, int data)
{
    Node* newNode = (Node*) malloc(sizeof(Node));
    
    if (newNode == NULL)
        return;

    newNode->data = data;
    newNode->link = stack->top;
    stack->top = newNode;
    (stack->count)++;
}


void display(Stack* stack)
{
    Node* current;
    current = stack->top;

    while (current)
    {        
        printf(" %d", current->data);
        current = current->link;
    }
    printf("\n");
}
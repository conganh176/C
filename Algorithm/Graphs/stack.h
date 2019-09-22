#include <stdio.h>
#include <stdlib.h>


typedef struct stack
{
    int count;
    int top;
    int max;
    int *array;
} Stack;


// Stack stack;


Stack* create(int max);
void display(Stack* stack);
void push(Stack* stack, int data);
void pop(Stack* stack, int* data);
// int peek(Stack* stack, int index);
// int checkEmpty(Stack* stack);
// int checkFull(Stack* stack);
// int findTop(Stack* stack);


int main()
{
    Stack* stack = create(100);

    push(stack, 6);
    push(stack, 9);
    push(stack, 66);
    push(stack, 99);
    push(stack, 69);
    
    display(stack);

    // printf("%d", stack->array[stack->top]);
    pop(stack, &(stack->array[stack->top]));

    printf("\nPeek data of index 2 is: %d", peek(stack, 2));

    printf("\nCheck empty: %d", checkEmpty(stack));
    printf("\nCheck full: %d", checkFull(stack));
    printf("\nTop value: %d", findTop(stack));

    return 0;
}


Stack* create(int max)
{
    Stack* stack = (Stack*) malloc(sizeof(Stack));

    stack->array = (int*) malloc(stack->max * sizeof(int));
    stack->top = -1;
    stack->count = 0;
    stack->max = max;

    return stack;
}


void display(Stack* stack)
{
    printf("\nDisplay stack: ");
    int i;
    for (i = stack->top; i >= 0; i--)
        printf("%d ", stack->array[i]);
}


void push(Stack* stack, int data)
{
    if (stack->count == stack->max)
        printf("\nOverflow!!!");
    else
    {
        (stack->top)++;
        (stack->count)++;
        stack->array[stack->top] = data;
    }
}


void pop(Stack* stack, int* data)
{
    printf("\nPop stack of value %d.", *data);
    if (stack->count == 0)
        return;
    
    *data = stack->array[stack->top];
    (stack->count)--;
    (stack->top)--;
    display(stack);
}


// int peek(Stack* stack, int index)
// {
//     int data = -1;
//     if (stack->top - index < 0)
//     {
//         printf("\nInvalid index.");
//         return -1;
//     }

//     data = stack->array[stack->top - index + 1];

//     return data;
// }


// int checkEmpty(Stack* stack)
// {
//     if (stack->count == 0)
//         return 1;
//     return 0;
// }


// int checkFull(Stack* stack)
// {
//     if (stack->count == stack->max)
//         return 1;
//     return 0;
// }


// int findTop(Stack* stack)
// {
//     if (stack->count != 0)
//         return stack->array[stack->top];
//     return -1;
// }
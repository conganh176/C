#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct stack
{
    int *stackArray;
    int count;
    int max;
    int top;
} Stack;


Stack* createStack(int max);
int pushStack(Stack *p, int dataIn);
int popStack(Stack* p, int *dataOut);
// int isEmptyStack()

int main()
{
    printf("Nhap vao so bat ky: ");
    int num;
    scanf("%d", &num);

    
        int numType;    

    do
    {
        printf("Nhap vao co so can chuyen (<=16): ");
        scanf("%d", &numType);

        if (numType > 16 || numType < 0)
            {
                printf("\nNhap lai di, dm!!!\n");
                continue;
            }

        else
        {
            break;
        }
        
    } while (true);
    

    char* hex = "0123456789abcdef";
    Stack* stack = createStack(1000);
    
    do
    {
        pushStack(stack, num % numType);
        num /= numType;
    } while (num != 0);
    

    while (stack->count != 0)
    {
        popStack(stack, &num);
        printf("%c", hex[num]);
    }

    return 0;
}


Stack* createStack (int max)
{
    Stack* p = (Stack*) malloc(sizeof(Stack));
    if (p == NULL)
        return NULL;

    p->top = -1;
    p->count = 0;
    p->max = max;
    p->stackArray = malloc(max * sizeof(int));
    return p;
}


int pushStack(Stack* p, int dataIn)
{
    if (p->count == p->max)
        return 0;

    (p->count)++;
    (p->top)++;
    p->stackArray[p->top] = dataIn;
    return 1;
}


int popStack(Stack* p, int *dataOut)
{
    if (p->count == 0)
        return 0;
    
    *dataOut = p->stackArray[p->top];
    (p->count)--;
    (p->top)--;
    return 1;
}
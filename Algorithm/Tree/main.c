#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree* left;
    struct tree* right;
} Tree;


typedef struct stack
{
    Tree* *array;
    int max;
    int count;
    int top;
} Stack;


Tree* create(int data);
void preOrderR(Tree* tree);
void inOrderR(Tree* tree);
void postOrderR(Tree* tree);

Stack* createStack(int data);
void pushStack(Stack* stack, Tree* data);
void popStack(Stack* stack, Tree* *data);
void destroyStack(Stack* stack);
Tree* topStack(Stack* stack);

void preOrder(Tree* tree);
void inOrder(Tree* tree);
void postOrder(Tree* tree);

int height(Tree* tree);
int leaf(Tree* tree);
int size(Tree* tree);

int main()
{
    Tree* root;

    root = create(1);
    root->left = create(7);
    root->right = create(0);
    root->left->left = create(6);
    root->left->right = create(9);
    root->right->right = create(69);

    printf("\nPrint Pre Order: ");
    preOrderR(root);

    printf("\nPrint In Order: ");
    inOrderR(root);

    printf("\nPrint Post Order: ");
    postOrderR(root);

    printf("\nPrint Pre Order: ");
    preOrder(root);

    printf("\nPrint In Order: ");
    inOrder(root);

    printf("\nPrint Post Order: ");
    postOrder(root);

    printf("\nHeight: %d", height(root));
    printf("\nLeafs: %d", leaf(root));
    printf("\nSize: %d", size(root));

    return 0;
}


Tree* create(int data)
{
    Tree* newNode = (Tree*) malloc(sizeof(Tree));
    newNode->data = data;
    newNode->left = newNode->right = NULL;

    return newNode;
}


void preOrderR(Tree* tree)
{
    if (tree)
    {
        printf("%d ", tree->data);

        preOrderR(tree->left);

        preOrderR(tree->right);
    }
}


void inOrderR(Tree* tree)
{
    if (tree)
    {
        inOrderR(tree->left);

        printf("%d ", tree->data);

        inOrderR(tree->right);
    }
}


void postOrderR(Tree* tree)
{
    if (tree)
    {
        postOrderR(tree->left);

        postOrderR(tree->right);

        printf("%d ", tree->data);
    }
}


Stack* createStack(int max)
{
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    if (stack == NULL)
        return NULL;

    stack->top = -1;
    stack->count = 0;
    stack->max = max;
    stack->array = malloc(max * sizeof(Tree*));
    
    return stack;
}


void pushStack(Stack* stack, Tree* data)
{
    if (stack->count == stack->max)
        printf("\nOverflow!!!");
    else
    {
        (stack->count)++;
        (stack->top)++;
        stack->array[stack->top] = data;
    }
}


void popStack(Stack* stack, Tree* *data)
{
    if (stack->count == 0)
        return;
    
    *data = stack->array[stack->top];
    (stack->count)--;
    (stack->top)--;
}


Tree* topStack(Stack* stack)
{
    if (stack->count != 0)
        return stack->array[stack->top];
    return NULL;
}


void preOrder(Tree* tree)
{
    Tree* current = tree;
    Stack* stack = createStack(10);

    while (current || stack->count != 0)
    {
        printf("%d ", current->data);

        if (current->right)
            pushStack(stack, current->right);
        
        if (current->left)
            current = current->left;
        else
            popStack(stack, &current);

    }
    
    free(stack);
}


void inOrder(Tree* tree)
{
    Tree* current = tree;
    Stack* stack = createStack(10);

    while (current || stack->count != 0)
    {
        if (current)
        {
            pushStack(stack, current);
            current = current->left;
        }
        else
        {
            popStack(stack, &current);
            printf("%d ", current->data);
            current = current->right;
        }
    }
    free(stack);
}


void postOrder(Tree* tree)
{
    Tree* current = tree;
    Stack* stack = createStack(10);

    while (current || stack->count != 0)
    {
        if (current)
        {
            pushStack(stack, current);
            current = current->left;
        }
        else 
        {
            while (stack->count != 0 && current == topStack(stack)->right)
            {
                popStack(stack, &current);
                printf("%d ", current->data);
            }

            current = stack->count == 0 ? NULL : topStack(stack)->right;
        }
    }
    free(stack);
}


int height(Tree* tree)
{
    int heightValue, heightLeft, heightRight;

    if (tree == NULL)
    {
        heightValue = -1;
    }
    else
    {
        heightLeft = height(tree->left);
        heightRight = height(tree->right);
        heightValue = 1 + (heightLeft > heightRight ? heightLeft: heightRight);
    }
    
    return heightValue;
}


int leaf(Tree* tree)
{
    if (tree == NULL)
    {
        return 0;
    }

    int count = 0;

    if (tree->left == NULL && tree->right == NULL)
        count++;

    count += leaf(tree->left);
    count += leaf(tree->right);

    return count;
}


int size(Tree* tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    else
    {
        return size(tree->left) + size(tree->right) + 1;
    }
}
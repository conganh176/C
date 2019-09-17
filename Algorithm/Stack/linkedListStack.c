#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
} Node;


Node* top;


void push(int data);
void pop();
void display();


int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    return 0;
}


void push(int data)
{
    Node* current = (Node*) malloc(sizeof(Node));

    if (current == NULL)
        printf("\nStack is full");
    else
    {
        current->data = data;
        current->next = top;
        top = current;
    }
}


void pop()
{
    Node* current;
    
    if (top == NULL)
        printf("\nEmpty stack");
    else
    {
        current = top;
        top = top->next;
        free(current);
    }
    display();
}


void display()
{
    Node* current;
    current = top;

    while (current)
    {        
        printf(" %d", current->data);
        current = current->next;
    }
    printf("\n");
}
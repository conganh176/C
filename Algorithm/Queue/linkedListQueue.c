#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
} Node;


Node *front, *rear;


void enqueue(int data);
void dequeue();
void display();


int main()
{
    enqueue(1);
    enqueue(7);
    enqueue(0);
    enqueue(6);
    enqueue(9);
    
    display();
    
    dequeue();

    display();

    return 0;
}


void display()
{
    printf("\nDisplay: ");
    
    Node* current = front;
    while (current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


void enqueue(int data)
{
    Node* current = (Node*) malloc(sizeof(Node));
    
    if (current == NULL)
        printf("\nQueue is full.");
    else
    {
        current->data = data;
        current->next = NULL;

        if (front == NULL)
            front = rear = current;
        else
        {
            rear->next = current;
            rear = current;
        }
    }
}


void dequeue()
{
    int data = -1;
    Node* current;

    if (front == NULL)
        printf("\nQueue is empty");
    else
    {
        data = front->data;
        current = front;
        front = front->next;
        free(current);
    }
}
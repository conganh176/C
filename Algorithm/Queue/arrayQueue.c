#include <stdio.h>
#include <stdlib.h>


typedef struct queue
{
    int max;
    int front;
    int rear;
    int* array;
} Queue;


Queue* create(Queue* queue, int size);
void display(Queue* queue);
void enqueue(Queue* queue, int data);
void dequeue(Queue* queue);


int main()
{
    Queue* queue;

    create(queue, 10);

    enqueue(queue, 1);
    enqueue(queue, 7);
    enqueue(queue, 0);
    enqueue(queue, 6);
    enqueue(queue, 9);
    
    display(queue);
    
    dequeue(queue);

    display(queue);

    return 0;
}


Queue* create(Queue* queue, int max)
{
    queue->array = (int*) malloc(sizeof(int) * max);
    queue->max = max;
    queue->front = -1;
    queue->rear = -1;

    return queue;
}


void display(Queue* queue)
{
    printf("\nDisplay: ");
    int i;
    for (i = queue->front; i <= queue->rear; i++)
        printf("%d ", queue->array[i]);
    printf("\n");
}


void enqueue(Queue* queue, int data)
{
    if (queue->rear == queue->max - 1)
        printf("\nQueue is full");
    else
    {
        queue->rear++;
        queue->array[queue->rear] = data;
    }
}


void dequeue(Queue* queue)
{
    int x = -1;

    if (queue->front == queue->rear)
        printf("\nQueue is empty");
    else
    {
        queue->front++;
        x = queue->array[queue->front];
    }
    return;
}
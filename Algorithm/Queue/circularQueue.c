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
    queue->front = 0;
    queue->rear = 0;

    return queue;
}


void display(Queue* queue)
{
    printf("\nDisplay: ");
    
    int i = queue->front + 1;

    do 
    {
        printf("%d ", queue->array[i]);
        i = (i + 1) % queue->max;
    } while (i != (queue->rear + 1)% queue->max);
}


void enqueue(Queue* queue, int data)
{
    if ((queue->rear + 1) % queue->max == queue->front)
        printf("\nQueue is full");
    else
    {
        queue->rear = (queue->rear + 1) % queue->max;
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
        queue->front = (queue->front + 1) % queue->max;
        x = queue->array[queue->front];
    }
    return;
}
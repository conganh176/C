// #ifndef queue.h
// #define queue.h
#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int max;
    // int count;
    int front;
    int rear;
    int* array;
} Queue;


Queue* createQueue(int max)
{
    Queue* queue = (Queue*) malloc(sizeof(Queue));

    queue->array = malloc(sizeof(int) * max);
    queue->max = max;
    queue->front = -1;
    queue->rear = -1;
    // queue->count = 0;

    return queue;
}


void display(Queue* queue)
{
    printf("\nDisplay: ");
    int i;

    if (queue->front == queue->rear)
        return;

    for (i = queue->front; i <= queue->rear ; i++)
        printf("%d ", queue->array[i]);
    printf("\n");
}


void enqueue(Queue* queue, int data)
{   
    //if (queue->count == queue->max)
    if (queue->rear == queue->max - 1)
    {
        printf("\nQueue is full");
        return;
    }

    (queue->rear)++;

    if (queue->rear == queue->max)
        queue->rear = 0;
    
    queue->array[queue->rear] = data;

    if (queue->front == -1)
        queue->front = 0;

    // (queue->count)++;

    return;
}


int dequeue(Queue* queue)
{
    if (queue->front == queue->rear)
        return -1;
    
    int data = queue->array[queue->front];

    (queue->front)++;

    if (queue->front == queue->max)
        queue->front = 0;

    if (queue->front > queue->rear)
        queue->rear = queue->front = -1;

    // (queue->count)--;

    return data;
}


// int front(Queue* queue, int* data)
// {
//     if (!queue->count)
//         return 0;
//     else
//     {
//         *data = queue->array[queue->front];
//         return *data;
//     }
// }


// int rear(Queue* queue, int* data)
// {
//     if (!queue->count)
//         return 0;
//     else
//     {
//         *data = queue->array[queue->rear];
//         return *data;
//     }
// }


// int checkEmpty(Queue* queue)
// {
//     return (queue->count == 0);
// }


// int checkFull(Queue* queue)
// {
//     return (queue->count == queue->max);
// }


void destroy(Queue* queue)
{
    if (queue)
    {
        free(queue->array);
        free(queue);
    }
    return;
}


// #endif
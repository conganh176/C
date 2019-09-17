#include <stdio.h>
#include <stdlib.h>


typedef struct queue
{
    int max;
    int count;
    int front;
    int rear;
    int* array;
} Queue;


Queue* createQueue(int max);
void display(Queue* queue);
void enqueue(Queue* queue, int data);
void dequeue(Queue* queue, int* data);
int front(Queue* queue, int* data);
int rear(Queue* queue, int* data);
int checkEmpty(Queue* queue);
int checkFull(Queue* queue);
void destroy(Queue* queue);


int main()
{
    int max;
    printf("\nPlease provide the max value: ");
    scanf("%d", &max);

    Queue* queue = createQueue(max);

    enqueue(queue, 1);
    enqueue(queue, 7);
    enqueue(queue, 0);
    enqueue(queue, 6);
    enqueue(queue, 9);
    
    display(queue);
    
    dequeue(queue, &(queue->array[queue->front]));

    display(queue);



    return 0;
}


Queue* createQueue(int max)
{
    Queue* queue = (Queue*) malloc(sizeof(Queue));

    queue->array = malloc(sizeof(int) * max);
    queue->max = max;
    queue->front = -1;
    queue->rear = -1;
    queue->count = 0;

    return queue;
}


void display(Queue* queue)
{
    printf("\nDisplay: ");
    int i;
    for (i = queue->front; i <= queue->count; i++)
        printf("%d ", queue->array[i]);
    printf("\n");
}


void enqueue(Queue* queue, int data)
{
    if (queue->count == queue->max)
    {
        printf("\nQueue is full");
        return;
    }

    (queue->rear)++;

    if (queue->rear == queue->max)
        queue->rear = 0;
    
    queue->array[queue->rear] = data;

    if (queue->count == 0)
    {
        queue->front = 0;
    }

    (queue->count)++;
    return;
}


void dequeue(Queue* queue, int* data)
{
    if (!queue->count)
        return;
    
    *data = queue->array[queue->front];

    (queue->front)++;

    if (queue->front == queue->max)
        queue->front = 0;

    if (queue->count == 1)
        queue->rear = queue->front = -1;

    (queue->front)--;

    return;
}


int front(Queue* queue, int* data)
{
    if (!queue->count)
        return 0;
    else
    {
        *data = queue->array[queue->front];
        return *data;
    }
}


int rear(Queue* queue, int* data)
{
    if (!queue->count)
        return 0;
    else
    {
        *data = queue->array[queue->rear];
        return *data;
    }
}


int checkEmpty(Queue* queue)
{
    return (queue->count == 0);
}


int checkFull(Queue* queue)
{
    return (queue->count == queue->max);
}


void destroy(Queue* queue)
{
    if (queue)
    {
        free(queue->array);
        free(queue);
    }
    return;
}
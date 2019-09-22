#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#define MAX 100





int main()
{
    Queue* queue = createQueue(MAX);

    enqueue(queue, 1);
    enqueue(queue, 7);
    enqueue(queue, 0);
    enqueue(queue, 6);
    enqueue(queue, 9);
    
    display(queue);
    printf("\n%d", queue->array[queue->front]);
    printf("\n%d", queue->array[queue->rear]);
    // printf("\n%d", queue->count);
    
    int data = dequeue(queue);
    printf("\n%d", data);
    display(queue);



    return 0;
}
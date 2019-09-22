#include <stdio.h>
#include <stdlib.h>


void bubbleSort(int array[], int arrayLength);
void bubbleUp(int array[], int start, int end);
void bubbleDown(int array[], int start, int end);
void swap(int* x, int* y);


int main()
{
    int array[] = { 7, 1, 0, 9, 6 };
    int arrayLength = sizeof(array) / sizeof(int);
    int i;

    printf("\nArray: ");
    for (i = 0; i < arrayLength; i++)
        printf("%d ", array[i]);
    printf("\n");

    bubbleSort(array, arrayLength);

    return 0;
}


void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void bubbleSort(int array[], int arrayLength)
{
    int i;
    for (i = 0; i < arrayLength - 1; i++)
    {
        bubbleUp(array, i, arrayLength - 1);
    }

    printf("\nArray (sorted up): ");
    for (i = 0; i < arrayLength; i++)
        printf("%d ", array[i]);
    printf("\n");

    for (i = 0; i < arrayLength - 1; i++)
    {
        bubbleDown(array, i, arrayLength - 1);
    }

    printf("\nArray (sorted down): ");
    for (i = 0; i < arrayLength; i++)
        printf("%d ", array[i]);
    printf("\n");
}


void bubbleUp(int array[], int start, int end)
{
    int i;
    for (i = end; i > start; i--)
        if (array[i] < array[i - 1])
            swap(&array[i], &array[i - 1]);
}


void bubbleDown(int array[], int start, int end)
{
    int i;
    for (i = end; i > start; i--)
        if (array[i] > array[i - 1])
            swap(&array[i], &array[i - 1]);
}
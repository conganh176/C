#include <stdio.h>
#include <stdlib.h>


void swap(int* x, int* y);
void selectionSort(int array[], int arrayLength);
int getMinIndex(int array[], int start, int end);


int main()
{
    int array[] = { 7, 1, 0, 9, 6 };
    int arrayLength = sizeof(array) / sizeof(int);
    int i;

    printf("\nArray: ");
    for (i = 0; i < arrayLength; i++)
        printf("%d ", array[i]);
    printf("\n");

    selectionSort(array, arrayLength);

    printf("\nArray (sorted): ");
    for (i = 0; i < arrayLength; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}


void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void selectionSort(int array[], int arrayLength)
{
    int i;
    for (i = 0; i < arrayLength - 1; i++)
        swap(&array[i], &array[getMinIndex(array, i, arrayLength - 1)]);
}


int getMinIndex(int array[], int start, int end)
{
    int index = start;
    int i;

    for (i = start + 1; i <= end; i++)
        if (array[i] < array[index])
            index = i;

    return index;
}
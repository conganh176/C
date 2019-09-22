#include <stdio.h>
#include <stdlib.h>


void insertionSort(int array[], int arrayLength);


int main()
{
    int array[] = { 7, 1, 0, 9, 6 };
    int arrayLength = sizeof(array) / sizeof(int);
    int i;

    printf("\nArray: ");
    for (i = 0; i < arrayLength; i++)
        printf("%d ", array[i]);
    printf("\n");

    insertionSort(array, arrayLength);

    printf("\nArray (sorted): ");
    for (i = 0; i < arrayLength; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}


void insertionSort(int array[], int arrayLength)
{
    int i, j, temp;

    for (i = 1; i < arrayLength; i++)
    {
        j = i - 1;
        temp = array[i];

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = temp;
    }
}
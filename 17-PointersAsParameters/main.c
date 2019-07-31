#include <stdio.h>
#include <stdlib.h>

void square(int * const x);

int main()
{
    int *num = (int *)malloc(sizeof(int));
    *num = 4;

    square(num);
    printf("The square of the given number: %d\n", *num);

    return 0;
}


void square(int * const x)
{
    *x = (*x) * (*x);

}

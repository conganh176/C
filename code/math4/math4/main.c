#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 0; i <= 100; i += 2)
    {
        sum+= i;
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}
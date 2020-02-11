#include <stdio.h>
#include <stdlib.h>

int CheckPrime(int x);

int main() {
    int N;
    do {
        printf("Nhap phan tu N: ");
        scanf("%d", &N);
    } while (N < 0);
    
    char *arr = NULL;
    arr = malloc(sizeof *arr * N);
    
    int i;
    for (i = 0; i < N; i++)
    {
        printf("Nhap phan tu %d: ", i);
        scanf("%c", &arr[i]);
    }
    
    for (i = 0; i < N; i++)
    {
        printf("%c", arr[i]);
    }
}

int CheckPrime(int x)
{
    int i = 0;
    int count = 0;
    if (x <= 1) return 0;
    if (x <= 3) return 1;
    
    for (i = 2; i < x/2; i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }
    
    if (count != 0) return 0;
    
    return 1;
}

#include <stdio.h>
#include <stdlib.h>

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

//Khai bao A, B, C, D 10 nguyen, E kieu int
//Nhap A, B tu ban phim
//Tinh C = A + B, D = A * B, E = A.*B
//In A, B , C, D ra man hinh

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10], B[10], C[10], D[10], E = 0;
    
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Nhap phan tu A[%d]: ", i);
        scanf("%d", &A[i]);
        printf("Nhap phan tu B[%d]: ", i);
        scanf("%d", &B[i]);
        
        C[i] = A[i] + B[i];
        D[i] = A[i] * B[i];
        E += D[i]; //A[i] * B[i]
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("A[%d]: %d \tB[%d]: %d \tC[%d]: %d\tD[%d]: %d\n", i, A[i], i, B[i], i, C[i], i, D[i]);
    }
    
    printf("E: %d\n", E);
    
    return 0;
}

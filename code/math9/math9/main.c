//Khai bao A[m][n], B[n][p], C[m][p] voi m = 3, n = 2, p = 4
//Nhap A, B ty ban phim
//Tinh C = A * B
//In A, B, C

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 3, n = 2, p = 4;
    int A[m][n], B[n][p], C[m][p];
    
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Nhap A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("Nhap B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    int k;
    
    for (i = 0; i < m; i++) //3
    {
        for (j = 0; j < p; j++) //4
        {
            C[i][j] = 0;
            
            for (k = 0; k < n; k++) //2
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
        }
    }
    
    printf("Ma tran A: \n");
    
    for (i = 0; i < m; i++)
    {
       for (j = 0; j < n; j++)
          printf("%d\t", A[i][j]);
       printf("\n");
    }
    
    printf("Ma tran B: \n");
    
    for (i = 0; i < n; i++)
    {
       for (j = 0; j < p; j++)
          printf("%d\t", B[i][j]);
       printf("\n");
    }
    
    printf("Ma tran C: \n");
    
    for (i = 0; i < m; i++)
    {
       for (j = 0; j < p; j++)
          printf("%d\t", C[i][j]);
       printf("\n");
    }
}

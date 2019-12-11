//Nhap tu, mau cua N phan so, luu dang cau truc
//in ra toi gian phan so va goi ham nay. Dung xac dinh uoc chung lon nhat 2 so
//Sap xep tang dan, giam dan

#include <stdio.h>
#include <stdlib.h>

struct PHANSO
{
    int tu;
    int mau;
    double value;
};

typedef struct PHANSO phanSo;

int main()
{
    int N;
    printf("Nhap vao luong phan tu: ");
    scanf("%d", &N);
    phanSo *arr = NULL;
    arr = malloc(N * sizeof(phanSo));
    
    int i, j, tu, mau;
    
    for (i = 0; i < N; i++)
    {
        
    }
    
    return 0;
}

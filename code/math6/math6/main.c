//Nhap tu, mau cua N phan so, luu dang cau truc
//in ra toi gian phan so va goi ham nay. Dung xac dinh uoc chung lon nhat 2 so
//Sap xep tang dan, giam dan

#include <stdio.h>
#include <stdlib.h>

typedef struct PHANSO
{
    int tu;
    int mau;
    double value;
} phanSo;

int UCLN(int a, int b);
void Reduction(phanSo p);
void SortUp(phanSo p[], int N);
void SortDown(phanSo p[], int N);
phanSo Add(phanSo p, int n);

int main()
{
    int N, n;
    printf("Nhap vao luong phan tu: ");
    scanf("%d", &N);
    phanSo *arr = NULL;
    arr = malloc(N * sizeof *arr);
    //arr = malloc(N * sizeof(phanSo));
    
    int i, tu, mau;
    
    for (i = 0; i < N; i++)
    {
        printf("Nhap tu so %d: ", i);
        scanf("%d", &tu);
        do {
            printf("Nhap mau %d: ", i);
            scanf("%d", &mau);
        } while (mau == 0);
        arr[i].tu = tu;
        arr[i].mau = mau;
        arr[i].value = (double) arr[i].tu / arr[i].mau;
    }
    
    for (i = 0; i < N; i++)
    {
        Reduction(arr[i]);
    }

    SortUp(arr, N);
    SortDown(arr, N);
    
    printf("Nhap gia tri cong them vao: \n");
    scanf("%d", &n);
    printf("Gia tri phan so sau khi cong them %d: ", n);
    
    for (i = 0; i < N; i++)
    {
        phanSo newP = Add(arr[i], n);
        printf("Phan so %d:\n", i);
        printf("Tu: %d\n", newP.tu);
        printf("Mau: %d\n", newP.mau);
        printf("Ket qua: %lf\n", newP.value);
    }
    
    return 0;
}

int UCLN(int a, int b)
{
    int min = (a > b ? b : a);
    int i;
    int result = 1;
    
    for (i = 2; i < min; i++)
    {
        if (a % i == 0 && b % i ==0)
            result = i;
    }
    return result;
}

void Reduction(phanSo p)
{
    if (p.tu == 0)
    {
        printf("Dang toi gian: %d\n", 0);
        return;
    }
    
    if (p.tu % p.mau == 0)
    {
        printf("Dang toi gian: %d\n", p.tu/p.mau);
        return;
    }
    
    int ucln = UCLN(p.tu, p.mau);
    printf("Dang toi gian: %d/%d\n", p.tu/ucln, p.mau/ucln);
}

void SortUp(phanSo p[], int N)
{
    int i, j;
    phanSo temp;
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (p[i].value > p[j].value)
            {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
    
    printf("Sap xep theo gia tri tang dan: ");
    
    for (i = 0; i < N; i++)
    {
        printf("%lf ", p[i].value);
    }
    
    printf("\n");
}

void SortDown(phanSo p[], int N)
{
    int i, j;
    phanSo temp;
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (p[i].value < p[j].value)
            {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
    
    printf("Sap xep theo gia tri giam dan: ");
    
    for (i = 0; i < N; i++)
    {
        printf("%lf ", p[i].value);
    }
    
    printf("\n");
}

phanSo Add(phanSo p, int n)
{
    phanSo t;
    t.tu = p.tu + p.mau * n;
    t.mau = p.mau;
    t.value = p.value + n;
    
    return t;
}

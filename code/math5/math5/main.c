#include <stdio.h>

double tinhPhanSo(int a, int b);
void soSanh(double phanSo1, double phanSo2);

int main()
{
    int tu, mau;
    
    printf("Nhap tu: ");
    scanf("%d", &tu);
    do
    {
        printf("Nhap mau: ");
        scanf("%d", &mau);
    } while (mau == 0);
    
    double phanSo1 = tinhPhanSo(tu, mau);
    
    printf("Phan so: %lf\n", phanSo1);
    
    printf("Nhap tu: ");
    scanf("%d", &tu);
    do
    {
        printf("Nhap mau: ");
        scanf("%d", &mau);
    } while (mau == 0);
    
    double phanSo2 = tinhPhanSo(tu, mau);
    
    printf("Phan so: %lf\n", phanSo2);

    soSanh(phanSo1, phanSo2);
    
    return 0;
}

double tinhPhanSo(int a, int b)
{
    return (double) a / b;
}

void soSanh(double phanSo1, double phanSo2)
{
    printf(phanSo1 > phanSo2 ? "Phan so thu nhat lon hon\n" : "Phan so thu hai lon hon\n");
}

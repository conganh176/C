#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap a: ");
    scanf("%f", &c);
    
    printf("Phuong trinh: (%.f)x^2 + (%.f)x + (%.f)\n", a, b, c);
    
    delta = b * b - 4 * a * c;
    
    if (delta < 0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else if (delta == 0)
    {
        printf("Phuong trinh co nghiem kep x = %f\n", -b / (2 * a));
    }
    else
    {
        printf("Phuong trinh co 2 nghiem x1 = %f, x 2 = %f",
               (-b - sqrt(delta))/ (2*a), (-b + sqrt(delta))/ (2 * a));
    }
    return 0;
}

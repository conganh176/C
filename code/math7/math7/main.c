#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;
    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);
    printf("Nhap c: ");
    scanf("%lf", &c);
    
    printf("Phuong trinh: (%lf)x^2 + (%lf)x + (%lf)\n", a, b, c);
    
    if (a == 0)
    {
        printf("Phuong trinh co nghiem x = %lf", -c/b);
    }
    else
    {
        delta = (b * b) - (4 * a * c);
        
        printf("Delta: %lf\n", delta);
        
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem\n");
        }
        
        if (delta == 0)
        {
            printf("Phuong trinh co nghiem kep: %lf\n", -b / (2 * a));
        }
        
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            
            printf("Phuong trinh co nghiem x1 = %lf, x2 = %lf\n", x1, x2);
        }
    }
    
    return 0;
}

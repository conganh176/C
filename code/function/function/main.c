//Tao function GPTB2 ax^2 + bx + c = 0, a !=0

#include <stdio.h>

void GPTB2(float a, float b, float c);

int main()
{
    float a, b, c;
    do {
        printf("Nhap a: ");
        scanf("%f", &a);
    } while (a == 0);
    
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    
    GPTB2(a, b, c);
    
    return 0;
}

void GPTB2(float a, float b, float c)
{
    printf("Phuong trinh (%f)x^2 + (%f)x + (%f) = 0\n", a, b, c);
    
    float delta = b * b - (4 * a * c);
    
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
        printf("Phuong trinh co nghiem x1 = %f, x2 = %f\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a) );
    }
}

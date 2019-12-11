#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    
    do
    {
        printf("Nhap do dai canh 1: ");
        scanf("%f", &a);
        printf("Nhap do dai canh 2: ");
        scanf("%f", &b);
        printf("Nhap do dai canh 3: ");
        scanf("%f", &c);
    } while ((a + b) <= c || (a + c) <= b || (b + c) <= a);
    
    float p = (a + b + c)/2;
        
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
        
    float ha = (2 * s) / a;
    float hb = (2 * s) / b;
    float hc = (2 * s) / c;
        
    printf("Chu vi: %.2f\n", p);
    printf("Dien tich: %.2f\n", s);
    printf("Chieu cao a: %.2f\n", ha);
    printf("Chieu cao b: %.2f\n", hb);
    printf("Chieu cao c: %.2f\n", hc);
    
    
    return 0;
}

#include <stdio.h>

int main()
{
    double width = 6.9;
    double height = 9.6;
    double perimeter = 0.0;
    double area = 0.0;
    perimeter = (width + height) * 2.0;
    area = width * height;

    printf("Width: %.2f, Height: %.2f, Perimeter: %.2f\n", width, height, perimeter);
    printf("Width: %.2f, Height: %.2f, Area: %.2f\n", width, height, area);

    return 0;
}

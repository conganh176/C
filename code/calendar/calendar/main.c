//Nhap vao so nguyen trong khoang tu 1 den 365, dua ra ngay trong tuan tuong ung biet ngay 1/1 la thu 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    
    do
    {
        printf("Nhap ngay: ");
        scanf("%d", &day);
    } while (day < 1 || day > 365);
    
    int thu = day % 7;
    
    switch (thu)
    {
        case 1:
            printf("Ngay %d la Thu 2\n", day);
            break;
        case 2:
            printf("Ngay %d la Thu 3\n", day);
            break;
        case 3:
            printf("Ngay %d la Thu 4\n", day);
            break;
        case 4:
            printf("Ngay %d la Thu 5\n", day);
            break;
        case 5:
            printf("Ngay %d la Thu 6\n", day);
            break;
        case 0:
        case 6:
            printf("Ngay %d la cuoi tuan\n", day);
            break;
    }
    
    return 0;
}

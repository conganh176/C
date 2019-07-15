#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define MONTHS 12
#define YEARS 5

int main()
{
    srand(time(0));
    float rainfall[YEARS][MONTHS];
    for (int year = 0; year < YEARS; year++) 
    {
        for (int month = 0; month < MONTHS; month++)
        {
            rainfall[year][month] = ((float)rand()/RAND_MAX) * 10;
            // printf("%.1f ", rainfall[i][j]);
        }
    }

    int year, month;
    float subtotal, total;

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtotal = 0; month < MONTHS; month++)
        {
            subtotal += rainfall[year][month];
        }
        printf("%4d %15.1f\n", 2010 + year, subtotal);
        total += subtotal;

    }
    printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf("JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC\n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtotal = 0; year < YEARS; year++)
        {
            subtotal += rainfall[year][month];
        }
        printf("%.1f ", subtotal/YEARS);
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    double minutesInYear = 525600;
    double years = 0.0;
    int days = 0.0;
    printf("Please provide the minutes here: ");
    scanf("%d", &minutes);
    years = minutes / minutesInYear;
    days = (int) (years * 365.0);
    printf("\nMinutes: %d, Years: %f, Days: %d", minutes, years, days);

    return 0;
}

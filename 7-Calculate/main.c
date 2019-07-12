#include <stdio.h>

#define PAYRATE 12.00
#define OVERTIME 40
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25

int main()
{
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please provide the number of hours worked in a week: ");
    scanf("%d", &hours);

    if (hours > 40) grossPay = 40 * PAYRATE + (hours - 40) * PAYRATE * 1.5;
    else grossPay = hours * PAYRATE;

    if (grossPay <= 300) taxes = grossPay * TAXRATE_300;
    else if (grossPay > 300 && grossPay <= 450) taxes = 300 * TAXRATE_300 + (grossPay - 300) * TAXRATE_150;
    else taxes = 300 * TAXRATE_300 + 150 * TAXRATE_150 + (grossPay - 450) * TAXRATE_REST;

    netPay = grossPay - taxes;

    printf("\nGross Pay: %.2f\nTaxes: %.2f\nNet Pay: %.2f\n", grossPay, taxes, netPay);

    return 0;
}

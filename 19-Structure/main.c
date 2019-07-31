#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    char date[15];
    float salary;
};

int main()
{
    struct employee emp = {"Brad", "9/6/69", 9876.00f};

    printf("\nName: %s", emp.name);
    printf("\nDate: %s", emp.date);
    printf("\nSalary: %.2f", emp.salary);

    printf("\nEnter employee information: \n");
    printf("\nName: ");
    scanf("%s", emp.name);
    printf("\nDate: ");
    scanf("%s", emp.date);
    printf("\nSalary: ");
    scanf("%f", &emp.salary);

    printf("\nName: %s", emp.name);
    printf("\nDate: %s", emp.date);
    printf("\nSalary: %.2f", emp.salary);

    return 0;
}

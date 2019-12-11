#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input();
void sayHello(char firstName[], char lastName[]);

int main()
{
    //input();
    int a = 3;
    printf("a: %d\n", a);
    
    int b = a++;
    printf("a: %d, b = a++: %d\n", a, b);
    
    int c = ++a;
    printf("a: %d, c = ++a: %d\n", a, c);
    
    printf("%d\n", b > c ? b : c);
    
    return 0;
}

void input()
{
    
    char firstName[100], lastName[100];
    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    
    sayHello(firstName, lastName);
}

void sayHello(char firstName[], char lastName[])
{
    printf("Hello, %s %s\n", firstName, lastName);
}

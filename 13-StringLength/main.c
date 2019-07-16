#include <stdio.h>

int main()
{
    char str1[] = "lorem lipsum...";
    char str2[] = "spaghetti and meatball.";
    unsigned int count = 0;

    while (str1[count] != '\0')
        ++count;

    printf("The length of the string \"%s\" is %d characters.\n", str1, count );

    count = 0;
    while (str2[count] != '\0')
        ++count;
    
    printf("The length of the string \"%s\" is %d characters.\n", str2, count);
    
    return 0;
}
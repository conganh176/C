#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[] = "HELLO";
    char string2[] = {'W', 'O', 'R', 'L', 'D', '\0'};
    printf("%s %s\n", string1, string2);

    return 0;
}
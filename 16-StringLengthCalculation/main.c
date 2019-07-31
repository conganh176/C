#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
    printf("%d \n", stringLength("The length of this string"));
    printf("%d \n", stringLength(""));

    return 0;
}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}

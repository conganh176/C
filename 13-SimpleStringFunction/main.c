#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char string1[], const char string2[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char str1[] = "lorem lipsum...";
    const char str2[] = "spaghetti and meatball.";
    char result[100];

    printf("The length of the string \"%s\" is %d characters.\n", str1, stringLength(str1) );
    printf("The length of the string \"%s\" is %d characters.\n", str2, stringLength(str2) );
    
    concat(result, str1, str2);
    printf("\n%s", result);

    printf("\n%d", equalStrings("Cong Anh", "Cong Anh"));

    return 0;
}

int stringLength (const char string[])
{   
   unsigned int count = 0;

    while (string[count] != '\0')
        ++count; 
    
    return count;
}

void concat(char result[], const char string1[], const char string2[])
{
    int i, j;

    for (i = 0; string1[i] != '\0'; ++i)
        result[i] = string1[i];

    for (j = 0; string2[j] != '\0'; ++j)
        result[i + j] = string2[j];

    result[i + j] = '\0';
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual = false;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else
        areEqual = false;

    return areEqual;
}
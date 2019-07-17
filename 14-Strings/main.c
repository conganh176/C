#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //String Length
    char string1[] = "HELLO";
    char string2[] = {'W', 'O', 'R', 'L', 'D', '\0'};
    printf("%s %s\n", string1, string2);

    //Copy Strings
    char sourceString[100];
    char destionationString[100];

    strcpy(sourceString, "This string was copied.");
    strcpy(destionationString, "This string was pasted.");

    printf("String 1 length: %lu\nString 2 length: %lu\n", strlen(string1), strlen(string2));
    printf("%s %s", sourceString, destionationString);

    char src[40];
    char dest[12];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "Welcome to the Velvet Room...");
    strncpy(dest, src, sizeof(dest) - 1);

    printf("\n%s\n%s", src, dest);

    //Combine String
    char myString[] = "My string";
    char input[100] = "Temporary input ";

    printf("\nThe string %s concatenated with %s is::::\n", myString, input);
    printf("%s", strcat(input, myString));

    char Src[50], Dest[50];

    strcpy(Src, "This is the source");
    strcpy(Dest, "This is destination");

    strncat(Dest, Src, 15);
    printf("\nFinal destination string: %s\n", Dest);

    //Search String
    char String[] = "The cat in the hat";
    char ch = 'i';
    char *pGotChar = NULL;
    pGotChar = strchr(String, ch);
    printf("\n%s", pGotChar);

    //Search for a substring
    char text[] = "Everyone is a jerk";
    char word[] = "is";
    char *pFound = NULL;
    pFound = strstr(text, word);
    printf("\n%s", pFound);

    //Tokenizing string
    char string[80] = "Hello how are you - my name is - Cong Anh";
    const char s[2] = "-";
    char *token;

    token = strtok(string, s);
    while(token != NULL)
    {
        printf("\n%s", token);

        token = strtok(NULL, s);
    }

    return 0;
}
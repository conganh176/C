#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *text = NULL;

    printf("\nEnter limit of the text: ");
    scanf("%d", &size);

    text = (char *)malloc(size * sizeof(char));

    if(text != NULL)
    {
        printf("\nEnter text here: ");
        scanf(" ");
        gets(text);

        printf("\nInput text is: %s", text);
    }
    free(text);
    text = NULL;

    return 0;
}

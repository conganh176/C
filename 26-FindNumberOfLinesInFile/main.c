#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main()
{
    FILE *fp = NULL;
    char ch;

    int linesCount = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        printf("File does not exist");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if(ch=='\n')
            linesCount++;
    }

    fclose(fp);
    fp = NULL;

    printf("Total lines: %d\n", ++linesCount);

    return 0;
}
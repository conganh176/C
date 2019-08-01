#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error reading file");
        return(-1);
    }
    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total file size: %d bytes\n", len);
    system("pause");

    return 0;
}

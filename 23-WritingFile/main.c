#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE *fp;
    int ch;

    fp = fopen("file.txt", "w+");

    for (ch = 33; ch <= 100; ch++)
        fputc(ch, fp);

    fclose(fp);
    system("pause");

    return 0;*/

    /*FILE *fp;
    fp = fopen("file2.txt", "w+");

    fputs("Hello World", fp);
    fputs("What's up?!", fp);

    fclose(fp);
    system("pause");

    return 0;*/

    FILE *fp;

    fp = fopen("file3.txt", "w+");

    if (fp != NULL)
        fprintf(fp, "%s %s %s %s %d", "The", "lucky", "number", "is", 69);

    fclose(fp);
    system("pause");

    return 0;
}

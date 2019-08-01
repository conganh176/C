#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("file.txt", "w+");
    if (fp != NULL)
        fputs("What's up World", fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, year);

    printf("String 1 |%s|\n", str1);
    printf("String 2 |%s|\n", str2);
    printf("String 3 |%s|\n", str3);
    printf("Integer |%d|\n", year);

    fclose(fp);
    system("pause");

    return 0;
}

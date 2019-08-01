#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fpos_t position;

    fp = fopen("file.txt", "w+");
    fgetpos(fp, &position);
    fputs("Hello World", fp);

    fgetpos(fp, &position);
    fputs(" Overwrite contents", fp);
    fclose(fp);

    system("pause");

    return 0;
}

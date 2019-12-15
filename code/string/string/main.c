//Nhap ten bat ky, co the nhap sai, in ra voi ky tu dau viet hoa
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char name[40];
    printf("Nhap ten: ");
    gets(name);
    
    int i = 0;
    
    while (name[i] != '\0')
    {
        name[i] = tolower(name[i]);
        i++;
    }
    
    name[0] = toupper(name[0]);
    
    i = 0;
    
    while (name[i] != '\0')
    {
        
        if (isspace(name[i]))
        {
            name[i + 1] = toupper(name[i + 1]);
        }
        i++;
    }
    
    printf("Ten: %s\n", name);
    
    return 0;
}

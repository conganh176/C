//Nhap vao mot xau ki tu, nhap N, rut choi xuong N ki tu, neu chuoi nho hon N ki tu, de nguyen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100];
    char result[100];
    int N;
    
    
    printf("Nhap xau ki tu: ");
    gets(text);
    
    printf("Nhap so ki tu: ");
    scanf("%d", &N);
    
    if (strlen(text) > N)
    {
        strncat(result, text, N);
        
        printf("%s\n", result);
    }
    else
    {
        printf("%s\n", text);
    }
    
    return 0;
}

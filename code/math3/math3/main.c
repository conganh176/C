//Tim so nguyen N sao cho
//S1 = 1 + 2 + ... + n < 1000
//S2 = S1 + N + 1 > 1000

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int s1 = 0, s2 = 0, n = 0;
    
    do
    {
        if (s2 >= 1000)
        {
            break;
        }
        n++;
        s1 += n;
        s2 = s1 + n + 1;
    } while (s1 < 1000);
    
    printf("s1: %d\n", s1);
    printf("s2: %d\n", s2);
    printf("n: %d\n", n);
    
    return 0;
}

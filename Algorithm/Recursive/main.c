#include <stdlib.h>
#include <stdio.h>


int rf(int n);
// int f(int n);


int main()
{
    // int i;
    // printf("\nNhap so bat ky: ");
    // scanf("%d", &i);
    // printf("\n%d ", rf(i));

    int i = rf(5);
    printf("\n%d ", i);
    // int j = f(5);
    // printf("\n%d ", j);

    return 0;
}


int rf(int n)
{
    if (n >= 1 && n <= 2)
        return n;
    else
    {
        return 2*(rf(n - 1)) + 3*(rf(n - 2));
    }
}


// int f(int n)
// {
//     if (n >= 1 && n <=2)
//         return n;
//     else
//     {
//         int i;
//         int sum = 0;
        
//         for (i = 3; i <= n; i++)
//             sum += (2*(i - 1) + 3*(i-2));
//         return sum;
//     }
// }
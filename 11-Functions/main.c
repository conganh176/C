#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
float absolute(float z);
float squareRoot(float xx);

int main()
{
    printf("\ngcd: %d", gcd(150, 35));
    printf("\nabsolute: %f", absolute(-5));
    printf("\nSquare Root: %f", squareRoot(25));

    return 0;
}

int gcd(int x, int y)
{
    int temp;

    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;
};

float absolute(float z)
{
    if (z < 0)
        z = -z;

    return z;
}

float squareRoot(float xx) {
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (xx < 0)
    {
        printf("\nInvalid value.");
        return -1.0;
    }
    else
    {
        while (absolute(guess * guess - xx) >= epsilon)
            guess = (xx / guess + guess) / 2.0;
        
        returnValue = guess;
    
    }

    return returnValue;
}

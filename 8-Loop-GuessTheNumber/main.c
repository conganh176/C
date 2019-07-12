#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int numberGuessed;
    time_t t;
    int guesses;

    srand((unsigned) time(&t));
    number = rand() % 21;

    for (guesses = 5; guesses > 0; --guesses)
    {
        printf("\nYou got %d guess%s", guesses, guesses == 1 ? "" : "es");
        printf("\nPlease provide the number from 0 to 20: ");
        scanf("%d", &numberGuessed);

        if (numberGuessed == number)
        {
            printf("\nYou win!!!\n");
            return 0;
        }
        else if (numberGuessed < 0 || numberGuessed > 20)
        {
            printf("\nPlease provide the valided number (0-20): ");
        }
        else if (numberGuessed > number) {
            printf("\nThe number is greater than my number. Try again.");
        }
        else if (numberGuessed < number) {
            printf("\nThe number is smaller than my number. Try again.");
        }
    };

    printf("\nYou are out of guesses, the number is: %d\n", number);

    return 0;
}

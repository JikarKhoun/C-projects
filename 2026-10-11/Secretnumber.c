#include <stdio.h>

int main(void)
{
    int number = 0;
    int secretNumber = 7;

    while (number != secretNumber)
    {
        printf("Guess the secret number: ");

        if (scanf("%d", &number) != 1)
        {
            printf("Invalid input\n");
            return 1;
        }

        if (number != secretNumber)
        {
            printf("Wrong! Try again.\n");
        }
    }

    printf("You have done it!!\n");

    return 0;
}
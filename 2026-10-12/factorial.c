#include <stdio.h>

int main(void)
{
    int integer;

    while (1)
    {
        printf("Enter a positive integer: ");

        if (scanf("%d", &integer) == 1 && integer > 0)
        {
            break;
        }

        printf("Invalid! Please enter a positive integer.\n");
    }

    int factorial = 1;

    for (int i = 1; i <= integer; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is %d\n", integer, factorial);

    return 0;
}
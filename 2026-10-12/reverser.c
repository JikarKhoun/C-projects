#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter at least a positive number of two digits: ");

    if (scanf("%d", &number) != 1 || number <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int reverse = 0;

    while (number > 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }

    printf("Reversed number: %d\n", reverse );

    return 0;
}
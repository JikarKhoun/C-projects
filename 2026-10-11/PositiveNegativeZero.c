#include <stdio.h>

int main(void)
{
    int number;
    int number2;

    printf("Enter two numbers separated by a (-): ");

    if (scanf("%d - %d", &number, &number2) != 2)
    {
        printf("Invalid input! Please enter two valid numbers.\n");
        return 1;
    }

    if (number > number2)
    {
        printf("Number %d is greater than number %d\n",
               number, number2);
    }
    else if (number < number2)
    {
        printf("Number %d is less than number %d\n",
               number, number2);
    }
    else
    {
        printf("Number %d is equal to number %d\n",
               number, number2);
    }

    if (number > 0)
    {
        printf("Number %d is positive\n", number);
    }
    else if (number < 0)
    {
        printf("Number %d is negative\n", number);
    }
    else
    {
        printf("Number %d is zero\n", number);
    }

    if (number2 > 0)
    {
        printf("Number %d is positive\n", number2);
    }
    else if (number2 < 0)
    {
        printf("Number %d is negative\n", number2);
    }
    else
    {
        printf("Number %d is zero\n", number2);
    }

    return 0;
}
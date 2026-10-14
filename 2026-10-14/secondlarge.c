#include <stdio.h>

int main(void)
{
    int numbers[100];
    int input;
    int largest;
    int secondLargest;
    int foundSecond = 0;

    while (1)
    {
        printf("How many numbers do you want to enter? ");

        if (scanf("%d", &input) == 1 && input > 1)
        {
            break;
        }

        printf("Invalid! Try again.\n");

        while (getchar() != '\n');
    }

    for (int i = 0; i < input; i++)
    {
        while (1)
        {
            printf("Enter number %d: ", i + 1);

            if (scanf("%d", &numbers[i]) == 1)
            {
                break;
            }

            printf("Invalid! Try again.\n");

            while (getchar() != '\n');
        }
    }

    largest = numbers[0];

    for (int i = 1; i < input; i++)
    {
        if (numbers[i] > largest)
        {
            secondLargest = largest;
            largest = numbers[i];
            foundSecond = 1;
        }
        else if ((foundSecond == 0 || numbers[i] > secondLargest)
                 && numbers[i] != largest)
        {
            secondLargest = numbers[i];
            foundSecond = 1;
        }
    }

    printf("\nLargest number: %d\n", largest);

    if (foundSecond)
    {
        printf("Second largest number: %d\n", secondLargest);
    }
    else
    {
        printf("No second largest number exists.\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int size;
    int numbers[100];

    while (1)
    {
        printf("How many numbers do you want to enter? ");

        if (scanf("%d", &size) == 1 && size >= 1 && size <= 100)
        {
            break;
        }

        printf("Invalid input. Please try again.\n");

        while (getchar() != '\n');
    }

    for (int i = 0; i < size; i++)
    {
        while (1)
        {
            printf("Enter number %d: ", i + 1);

            if (scanf("%d", &numbers[i]) == 1)
            {
                break;
            }

            printf("Invalid input. Please try again.\n");

            while (getchar() != '\n');
        }
    }

    printf("\nOriginal array:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\nReversed array:\n");

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
#include <stdio.h>

int main(void)
{
    int array1[5];
    int array2[5];
    int matches = 0;

    printf("Enter 5 numbers for the first array:\n");

    for (int i = 0; i < 5; i++)
    {
        while (1)
        {
            printf("Number %d: ", i + 1);

            if (scanf("%d", &array1[i]) == 1)
            {
                break;
            }

            printf("Invalid input. Try again.\n");

            while (getchar() != '\n');
        }
    }

    printf("\nEnter 5 numbers for the second array:\n");

    for (int i = 0; i < 5; i++)
    {
        while (1)
        {
            printf("Number %d: ", i + 1);

            if (scanf("%d", &array2[i]) == 1)
            {
                break;
            }

            printf("Invalid input. Try again.\n");

            while (getchar() != '\n');
        }
    }

    printf("\nMatching values: ");

    for (int i = 0; i < 5; i++)
        {
        if (array1[i] == array2[i])
        {
            matches++;
            printf("%d ", array1[i]);
        }
         }

    printf("\nMatching positions: %d\n", matches);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int count;
    int evenCount = 0;

    printf("How many numbers do you want to enter? ");

    if (scanf("%d", &count) != 1 || count <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= count; i++)
    {
        int number;

        printf("Enter number %d: ", i);

        if (scanf("%d", &number) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        if (number % 2 == 0)
        {
            evenCount++;
        }
    }

    printf("There are %d even numbers.\n", evenCount);

    return 0;
}
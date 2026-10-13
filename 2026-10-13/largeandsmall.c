#include <stdio.h>

int main(void)
{
    int tinputs;
    int inputs[100];

    while (1)
          {
        printf("How many numbers do you want to enter? ");

        if (scanf("%d", &tinputs) == 1 && tinputs > 0 && tinputs <= 100)
        {
            break;
        }

        printf("Invalid input. Please try again.\n");

        while (getchar() != '\n');
    }

    for (int i = 0; i < tinputs; i++)
    {
        while (1)
        {
            printf("Enter number %d: ", i + 1);

            if (scanf("%d", &inputs[i]) == 1)
            {
                break;
            }

            printf("Invalid input. Please try again.\n");

            while (getchar() != '\n');
        }
    }

    int largest = inputs[0];
    int smallest = inputs[0];
    int sum = 0;

    for (int i = 0; i < tinputs; i++)
    {
        if (inputs[i] > largest)
        {
            largest = inputs[i];
        }

        if (inputs[i] < smallest)
        {
            smallest = inputs[i];
        }

        sum += inputs[i];
    }

    float average = (float)sum / tinputs;

    printf("\nLargest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
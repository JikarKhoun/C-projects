#include <stdio.h>
int main(void) 
{
    int input;
    int number;
    int large;

    while (1)
    {
    printf("How many numbers do you want to enter? ");
    if (scanf("%d", &input) == 1 && input > 0)
    {
    break;
    }

    printf("Invalid, please try again.");

    while (getchar() != '\n');

    }

    for (int i = 1; i <= input; i++)

    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (i==1)
        {
            large= number;
        }

        else if (number > large)
        {
            large = number;
        }
    }

        printf("Large number is %d.", large);
    

return 0;
}


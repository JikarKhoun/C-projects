#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int array[50];
    int len = 50;
    int largest;
    int largestIndex;

    srand(time(NULL));

    for (int i = 0; i < len; i++)
    {
        array[i] = rand() % 201 - 100;
    }

    largest = array[0];
    largestIndex = 0;

    for (int i = 1; i < len; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
            largestIndex = i;
        }
    }

    printf("Array:\n");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    printf("Largest value is: %d\n", largest);
    printf("Index of the largest value: %d\n", largestIndex);

    return 0;
}
#include <stdio.h>

int calculateSum (int numbers[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
     return sum;
}

int main(void) {

    int numbers [5];
     for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
       if  (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1;
        }
     }

     int sum = calculateSum(numbers, 5);

     printf("The sum of the numbers is: %d\n", sum);
     printf("The average of the numbers is: %.2f\n", (float)sum / 5);
    
     return 0;
}
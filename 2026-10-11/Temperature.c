#include <stdio.h>
int main() {
   
    float tempe;
    printf("Enter the temperature in Celsius: ");
    if (scanf("%f", &tempe) !=1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }
   
  if (tempe < 0)
   {
    printf("The temperature is below freezing point.\n");
   }

   else if (tempe >= 0 && tempe <= 11)
   {
    printf("When the temperature is between 0 and 11, it is cold.\n");
   }
   
   else if (tempe >= 12 && tempe <= 19)
   {
    printf("When the  temperature is between 12 and 19, it is warm.\n");
   }

   else
   {
    printf("When the temperature is 20 or above, it is hot.\n");
   }

  return 0;
    }

#include <stdio.h>

int main (void)
{
      
    int number;

    printf("Enter a number: ");
   if ( scanf("%d", &number) != 1)
        {
              printf("Invalid input! Please enter a valid number.\n");
          return 1;
        }
    else  if  (number % 2 == 0) 

          {
        printf("Number %d is even\n", number);
          }
          
      else 
      {
     printf("Number %d is odd\n", number);
      }
    
    return 0;
}


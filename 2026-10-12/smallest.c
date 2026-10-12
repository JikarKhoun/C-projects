#include <stdio.h>
int main (void)
{
 
     int Tinput;
     int input;
     int smallest;

     while (1)
     {
     printf("How manny numbers do you want to enter? ");
     if (scanf("%d", &Tinput) == 1 && Tinput > 0)
     {
        break;
     }
  
     printf("Invalid, please try again!");

     while (getchar() != '\n');

     }

     for (int i = 1; i <= Tinput; i++)
       {
        printf("Enter number %d: ", i);
        scanf("%d", &input);
      

      
      if ( i == 1 )
      {
        smallest=input;
      }

      else if (smallest > input)
      {
                smallest=input;

      }
    }

  printf("The smallest number is %d\n", smallest);








    return 0;
}
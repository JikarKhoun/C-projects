#include <stdio.h>
int main(void)
{
  int number;

 while (1) 

    {
    printf("Enter a positive number: ");

    if (scanf("%d", &number) == 1 && number > 0)

    {
      break;
    }
   
    printf("Invalid, please try again!");

    while (getchar() != '\n');


    }



 for (int i= 1; i <= number; i++)
 {
    printf("%d", i);
 }


 printf("\n");

 for (int i = number ; i >=1 ; i--)

{
    printf("%d", i);
}

printf("\n");
    
return 0;
}
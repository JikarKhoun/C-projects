
#include <stdio.h>
int main(void)
{
    int tinputs;
    int inputs [100];
    int search;
    int count = 0;

    while (1)
    {
    printf("How many numbers do you want to put: ");
   if (scanf("%d", &tinputs) == 1 && tinputs > 0 && tinputs <= 100)
  {
    break;
  }

   printf("Invalid try again!");
 
    while (getchar () != '\n');
    }

   for (int i = 0; i < tinputs; i++) {
    while (1) {
       printf("Enter number %d: ", i + 1);
      if (scanf("%d", &inputs[i]) == 1 )
      {
        break;
      }

      printf("Invalid try again!!");

      while (getchar() != '\n');
    }
 

   }
   

   while (1) {
    printf("Put another number to search: ");
    if (scanf("%d", &search) == 1)
    {
        break;
    }
    
    printf("Invalid please try again!!");

    while (getchar() != '\n');
   }
  for (int i = 0; i < tinputs; i++)
    {
        if (inputs[i] == search)
        {
            count++;
        }
    }

 printf("\nThe number %d appears %d times.\n", search, count);

    if (count > 0)
    {
        printf("Found at positions: ");

        for (int i = 0; i < tinputs; i++)
        {
            if (inputs[i] == search)
            {
                printf("%d ", i + 1);
            }
        }

        printf("\n");
    }


    return 0;
}


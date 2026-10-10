#include <stdio.h>

int main() {
   int myarray [] = {5, 9, 10, 11, 4, 3, 1, 6, 7};
   int min;

  min = myarray [0];
  for (int i = 1; i < 9; i++)
       {

        printf("Checking myarray [%d] = %d\n", i, myarray [i]);
        if (myarray [i] < min ) 
        
       {
        min = myarray [i]; 
        printf("New min found: %d\n", min);
        }
       }

    printf("Minimum value in the array is: %d\n", min);

    return 0;
}

#include <stdio.h>
int main(void) {

int counter = 0;
printf("Enter a positive integer: ");
if (scanf("%d", &counter) != 1 || counter <= 0) {
    printf("Error reading counter value, please try a positive integer\n");
  return 1;
}

for (int i = 1; i <= counter; i++) {
    printf("Counter: %d\n", i);
}
return 0;
}
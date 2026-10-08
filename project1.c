#include <stdio.h>
int main(void) {
 int a, b, sum;
  printf("Welcome to the sum calculator!\n");
 printf("Give 1. number: ");
 scanf("%d", &a); 
 printf("Give 2. number: ");
 scanf("%d", &b); 
 sum = a + b;
 printf("The sum is = %d\n", sum);
 return 0;
}
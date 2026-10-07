#include <stdio.h>
 
int main(void) {
 int a, b, sum;
 printf("Hello, Merkhan!\n");
 printf("Give 1. number: ");
 scanf("%d", &a); // User types first number
 printf("Give 2. number: ");
 scanf("%d", &b); // User types second number
 sum = a + b;
 printf("The sum is = %d\n", sum);
 return 0;
}
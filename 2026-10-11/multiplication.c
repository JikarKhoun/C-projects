#include <stdio.h>
int main() {

    int number1;
    printf("Enter a number: ");
    scanf("%d", &number1);

    for (int i = 1; i <= 10; i++)
     {
            int total = number1 * i;

        printf("%2.d.  %d x %2.d = %d\n", i,  number1, i, total);
     }
    return 0;
}

#include <stdio.h>

int main() {
    char phone[20];

    printf("Enter your phone number: ");
    scanf("%19s", phone);

    FILE *file = fopen("phone.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "%s\n", phone);

    fclose(file);

    printf("Phone number saved!\n");

    return 0;
}
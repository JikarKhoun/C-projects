#include <stdio.h>

int main() {
    char name[50];
    char phone[20];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your phone number: ");
    scanf("%19s", phone);

    FILE *file = fopen("users.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Name: %s | Phone: %s\n", name, phone);

    fclose(file);

    printf("Information saved!\n");

    return 0;
}
#include <stdio.h>

int main(void)
{
    char names[100][50];
    int grades[100];

    int count = 0;
    int choice;

    while (1)
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Highest Grade\n");
        printf("4. Lowest Grade\n");
        printf("5. Average Grade\n");
        printf("6. Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");

            while (getchar() != '\n');

            continue;
        }

        switch (choice)
        {
            case 1:
            {
                printf("Enter student name: ");
                scanf("%49s", names[count]);

                while (1)
                {
                    printf("Enter grade: ");

                    if (scanf("%d", &grades[count]) == 1 &&
                        grades[count] >= 0 &&
                        grades[count] <= 100)
                    {
                        break;
                    }

                    printf("Grade must be between 0 and 100.\n");

                    while (getchar() != '\n');
                }

                count++;

                printf("Student added successfully.\n");

                break;
            }

            case 2:
            {
                if (count == 0)
                {
                    printf("No students found.\n");
                }
                else
                {
                    printf("\nStudents:\n");

                    for (int i = 0; i < count; i++)
                    {
                        printf("%d. %s - %d\n",
                               i + 1,
                               names[i],
                               grades[i]);
                    }
                }

                break;
            }

            case 3:
            {
                if (count == 0)
                {
                    printf("No students found.\n");
                }
                else
                {
                    int highest = grades[0];

                    for (int i = 1; i < count; i++)
                    {
                        if (grades[i] > highest)
                        {
                            highest = grades[i];
                        }
                    }

                    printf("Highest grade: %d\n", highest);
                }

                break;
            }

            case 4:
            {
                if (count == 0)
                {
                    printf("No students found.\n");
                }
                else
                {
                    int lowest = grades[0];

                    for (int i = 1; i < count; i++)
                    {
                        if (grades[i] < lowest)
                        {
                            lowest = grades[i];
                        }
                    }

                    printf("Lowest grade: %d\n", lowest);
                }

                break;
            }

            case 5:
            {
                if (count == 0)
                {
                    printf("No students found.\n");
                }
                else
                {
                    int sum = 0;

                    for (int i = 0; i < count; i++)
                    {
                        sum += grades[i];
                    }

                    printf("Average grade: %.2f\n",
                           (float)sum / count);
                }

                break;
            }

            case 6:
            {
                printf("Goodbye!\n");
                return 0;
            }

            default:
            {
                printf("Invalid choice.\n");
            }
        }
    }

    return 0;
}
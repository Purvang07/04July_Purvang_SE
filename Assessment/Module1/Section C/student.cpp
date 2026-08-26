#include<stdio.h>
#include<string.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

// Function to calculate and display weekly report
void weeklyReport(struct StudyLog subjects[], int n)
{
    int i, j;
    float total, average;

    printf("\n========== Weekly Report ==========\n");

    for (i = 0; i < n; i++)
    {
        total = 0;

        for (j = 0; j < 7; j++)
        {
            total = total + subjects[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject: %s\n", subjects[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);
    }
}

// Function to display progress chart
void progressChart(struct StudyLog subjects[], int n)
{
    int i, j, k;

    printf("\n========== Progress Chart ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%s\n", subjects[i].subject);

        for (j = 0; j < 7; j++)
        {
            printf("Day %d: ", j + 1);

            // Print one dot for each complete hour
            for (k = 0; k < (int)subjects[i].hours[j]; k++)
            {
                printf(".");
            }

            printf(" %.2f hours\n", subjects[i].hours[j]);
        }
    }
}

int main()
{
    struct StudyLog subjects[3];

    int choice;
    int i, j;

    FILE *file;

    // Set subject names
    strcpy(subjects[0].subject, "C Programming");
    strcpy(subjects[1].subject, "Web Development");
    strcpy(subjects[2].subject, "Data Structures");

    // Initialize all hours to 0
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            subjects[i].hours[j] = 0;
        }
    }

    while (1)
    {
        printf("\n====================================\n");
        printf("     Student Productivity Tracker\n");
        printf("====================================\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int day;

            printf("\nEnter day number (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7)
            {
                printf("Invalid day! Please enter 1 to 7.\n");
                continue;
            }

            for (i = 0; i < 3; i++)
            {
                printf("Enter study hours for %s: ",
                       subjects[i].subject);

                scanf("%f", &subjects[i].hours[day - 1]);
            }

            printf("Study hours recorded successfully!\n");
        }

        else if (choice == 2)
        {
            weeklyReport(subjects, 3);
            progressChart(subjects, 3);
        }

        else if (choice == 3)
        {
            file = fopen("productivity_log.txt", "w");

            if (file == NULL)
            {
                printf("Unable to open file!\n");
                return 1;
            }

            // Save each subject and its 7 daily values
            for (i = 0; i < 3; i++)
            {
                fprintf(file, "%s", subjects[i].subject);

                for (j = 0; j < 7; j++)
                {
                    fprintf(file, ",%.2f", subjects[i].hours[j]);
                }

                fprintf(file, "\n");
            }

            fclose(file);

            printf("\nData saved to productivity_log.txt\n");
            printf("Thank you for using Student Productivity Tracker!\n");

            break;
        }

        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

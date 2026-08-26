#include <stdio.h>
main()
{
    int minutes[7] = {0, 0, 0, 0, 0, 0, 0};
    int choice, i;
    int total, highest;
    float average;
    char confirm;
    char line[100];

    FILE *file;

    while (1)
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Generate weekly report\n");
        printf("4. Reset weekly data\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            file = fopen("music_log.txt", "w");

            if (file == NULL)
            {
                printf("Unable to open file!\n");
                continue;
            }

            for (i = 0; i < 7; i++)
            {
                printf("Enter minutes for day %d: ", i + 1);
                scanf("%d", &minutes[i]);

                fprintf(file, "Day %d: %d minutes\n",
                        i + 1, minutes[i]);
            }

            fclose(file);

            printf("Listening data saved successfully!\n");
        }

        else if (choice == 2)
        {
            file = fopen("music_log.txt", "r");

            if (file == NULL)
            {
                printf("No listening data found!\n");
                continue;
            }

            printf("\n===== Weekly Summary =====\n");

            while (fgets(line, sizeof(line), file) != NULL)
            {
                printf("%s", line);
            }

            fclose(file);
        }

        else if (choice == 3)
        {
            file = fopen("music_log.txt", "r");

            if (file == NULL)
            {
                printf("No listening data found!\n");
                continue;
            }

            total = 0;
            highest = 0;

            for (i = 0; i < 7; i++)
            {
                fscanf(file, "Day %*d: %d minutes\n", &minutes[i]);

                total = total + minutes[i];

                if (minutes[i] > highest)
                {
                    highest = minutes[i];
                }
            }

            fclose(file);

            average = (float)total / 7;

            printf("\n===== Weekly Report =====\n");
            printf("Total: %d minutes\n", total);
            printf("Average: %.2f minutes\n", average);
            printf("Highest: %d minutes\n", highest);
        }

        else if (choice == 4)
        {
            printf("\nAre you sure you want to reset all data? (y/n): ");
            scanf(" %c", &confirm);

            if (confirm == 'y' || confirm == 'Y')
            {
                // Clear the array
                for (i = 0; i < 7; i++)
                {
                    minutes[i] = 0;
                }

                // Open file in write mode to clear its contents
                file = fopen("music_log.txt", "w");

                if (file != NULL)
                {
                    fclose(file);
                    printf("Weekly data has been reset successfully!\n");
                }
                else
                {
                    printf("Unable to clear the file!\n");
                }
            }
            else
            {
                printf("Reset cancelled.\n");
            }
        }

        else if (choice == 5)
        {
            printf("Thank you for using Music Listening Logger!\n");
            break;
        }

        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }
}

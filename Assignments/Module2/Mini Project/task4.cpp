#include <stdio.h>
main()
{
    int minutes[7];
    int choice, i;
    int total, highest;
    float average;

    FILE *file;

    while (1)
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Generate weekly report\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Open file in write mode
            file = fopen("music_log.txt", "w");

            if (file == NULL)
            {
                printf("Unable to open file!\n");
                return 1;
            }

            // Take listening minutes for 7 days
            for (i = 0; i < 7; i++)
            {
                printf("Enter minutes for day %d: ", i + 1);
                scanf("%d", &minutes[i]);

                // Save data into the file
                fprintf(file, "Day %d: %d minutes\n",
                        i + 1, minutes[i]);
            }

            fclose(file);

            printf("Listening data saved successfully!\n");
        }

        else if (choice == 2)
        {
            // Open file in read mode
            file = fopen("music_log.txt", "r");

            if (file == NULL)
            {
                printf("No listening data found!\n");
                continue;
            }

            char line[100];

            printf("\n===== Weekly Summary =====\n");

            while (fgets(line, sizeof(line), file) != NULL)
            {
                printf("%s", line);
            }

            fclose(file);
        }

        else if (choice == 3)
        {
            // Open saved file
            file = fopen("music_log.txt", "r");

            if (file == NULL)
            {
                printf("No listening data found!\n");
                continue;
            }

            total = 0;
            highest = 0;

            // Read 7 days from the file
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
            printf("Total listening time: %d minutes\n", total);
            printf("Average listening time: %.2f minutes\n", average);
            printf("Highest listening time: %d minutes\n", highest);
        }

        else if (choice == 4)
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

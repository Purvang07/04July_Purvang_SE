#include <stdio.h>
main()
{
    int minutes[7];
    int choice, i, total;
    FILE *file;

    while (1)
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Take listening minutes for each day
            file = fopen("music_log.txt", "w");

            if (file == NULL)
            {
                printf("Unable to open file!\n");
                return 1;
            }

            for (i = 0; i < 7; i++)
            {
                printf("Enter minutes for day %d: ", i + 1);
                scanf("%d", &minutes[i]);

                // Save each day's data to the file
                fprintf(file, "Day %d: %d minutes\n", i + 1, minutes[i]);
            }

            fclose(file);

            printf("Listening data saved successfully!\n");
        }
        else if (choice == 2)
        {
            // Read and display saved data
            file = fopen("music_log.txt", "r");

            if (file == NULL)
            {
                printf("No listening data found!\n");
                continue;
            }

            printf("\n===== Weekly Summary =====\n");

            char line[100];

            while (fgets(line, sizeof(line), file) != NULL)
            {
                printf("%s", line);
            }

            fclose(file);
        }
        else if (choice == 3)
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

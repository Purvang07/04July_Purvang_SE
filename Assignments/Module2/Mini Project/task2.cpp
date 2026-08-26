#include <stdio.h>
main()
{
    int minutes[7] = {0, 0, 0, 0, 0, 0, 0};
    int choice, i, total;

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
            // Enter listening time for each day
            for (i = 0; i < 7; i++)
            {
                printf("Enter minutes for day %d: ", i + 1);
                scanf("%d", &minutes[i]);
            }

            printf("Listening time saved successfully!\n");
        }
        else if (choice == 2)
        {
            // Display the weekly listening summary
            total = 0;

            printf("\n===== Weekly Summary =====\n");

            for (i = 0; i < 7; i++)
            {
                printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                total = total + minutes[i];
            }

            printf("Total listening time: %d minutes\n", total);
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

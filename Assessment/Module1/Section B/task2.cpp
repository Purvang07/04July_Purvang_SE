#include<stdio.h>
main()
{
    float hours[7];
    float total = 0, average;
    int i, highestDay = 0;

    // Take study hours for 7 days
    for (i = 0; i < 7; i++)
    {
        do
        {
            printf("Enter study hours for Day %d (0-24): ", i + 1);
            scanf("%f", &hours[i]);

            if (hours[i] < 0 || hours[i] > 24)
            {
                printf("Invalid input! Enter hours between 0 and 24.\n");
            }

        } while (hours[i] < 0 || hours[i] > 24);

        total = total + hours[i];

        if (hours[i] > hours[highestDay])
        {
            highestDay = i;
        }
    }

    average = total / 7;

    printf("\n===== Weekly Study Summary =====\n");
    printf("Total study hours: %.2f\n", total);
    printf("Daily average: %.2f hours\n", average);
    printf("Highest study hours: Day %d (%.2f hours)\n",
           highestDay + 1, hours[highestDay]);

    printf("\n===== Study Chart =====\n");

    for (i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);

        // Print one star for each complete hour
        for (int j = 0; j < (int)hours[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

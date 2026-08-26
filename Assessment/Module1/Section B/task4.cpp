#include<stdio.h>
struct Expense
{
    char category[30];
    float amount;
};
int main()
{
    struct Expense expenses[10];

    int choice;
    int count = 0;
    int i;
    float total;

    while (1)
    {
        printf("\n===== Personal Expense Logger =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (count >= 10)
            {
                printf("Expense limit reached!\n");
            }
            else
            {
                printf("Enter category: ");
                scanf("%s", expenses[count].category);

                printf("Enter amount: ");
                scanf("%f", &expenses[count].amount);

                count++;

                printf("Expense added successfully!\n");
            }
        }

        else if (choice == 2)
        {
            total = 0;

            printf("\n===== All Expenses =====\n");

            if (count == 0)
            {
                printf("No expenses recorded.\n");
            }
            else
            {
                for (i = 0; i < count; i++)
                {
                    printf("%d. %s - %.2f\n",
                           i + 1,
                           expenses[i].category,
                           expenses[i].amount);

                    total = total + expenses[i].amount;
                }

                printf("-------------------------\n");
                printf("Running Total: %.2f\n", total);
            }
        }

        else if (choice == 3)
        {
            FILE *file;

            file = fopen("expenses.txt", "w");

            if (file == NULL)
            {
                printf("Unable to open file!\n");
                return 1;
            }

            for (i = 0; i < count; i++)
            {
                fprintf(file, "%s,%.2f\n",
                        expenses[i].category,
                        expenses[i].amount);
            }

            fclose(file);

            printf("Expenses saved to expenses.txt\n");
            printf("Exiting program...\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }
	return 0;
}

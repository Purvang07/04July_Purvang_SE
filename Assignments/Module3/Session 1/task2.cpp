#include <stdio.h>
#include <string.h>

char tasks[5][100];
char status[5][10];
int taskCount = 0;

// Function to mark a task as DONE
void markTaskDone(int index)
{
    strcpy(status[index], "DONE");
}
int main()
{
    int i;
    int taskNumber;

    // Add up to 5 tasks
    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);

        tasks[i][strcspn(tasks[i], "\n")] = '\0';

        strcpy(status[i], "PENDING");
        taskCount++;
    }

    // Ask which task is completed
    printf("\nEnter task number to mark as DONE: ");
    scanf("%d", &taskNumber);

    if (taskNumber >= 1 && taskNumber <= taskCount)
    {
        markTaskDone(taskNumber - 1);
    }
    else
    {
        printf("Invalid task number.\n");
    }

    // Print updated task list
    printf("\n===== Updated Task List =====\n");

    for (i = 0; i < taskCount; i++)
    {
        printf("%d. %s - %s\n", i + 1, tasks[i], status[i]);
    }

    return 0;
}

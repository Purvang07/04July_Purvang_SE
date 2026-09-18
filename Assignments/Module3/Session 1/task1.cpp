#include <stdio.h>
#include <string.h>

// Global array to store 5 tasks
char tasks[5][100];
int taskCount = 0;

int main()
{
    int i;

    // Add up to 5 tasks
    printf("Enter 5 tasks:\n");
							
    for (i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);

        // Remove newline from the input
        tasks[i][strcspn(tasks[i], "\n")] = '\0';

        taskCount++;
    }
    // Print all tasks
    printf("\n===== Task List =====\n");

    for (i = 0; i < taskCount; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
	return 0;
}

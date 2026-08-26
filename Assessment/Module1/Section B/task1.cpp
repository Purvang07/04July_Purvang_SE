#include <stdio.h>
main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100)
    {
        printf("Invalid percentage! Enter a value between 0 and 100.\n");
    }
    else if (percentage >= 90)
    {
        printf("Grade: A\n");
        printf("Excellent work! Keep it up.\n");
    }
    else if (percentage >= 75)
    {
        printf("Grade: B\n");
        printf("Good work! Keep pushing.\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: C\n");
        printf("Good effort! You can improve further.\n");
    }
    else if (percentage >= 45)
    {
        printf("Grade: D\n");
        printf("Keep working hard and improve your score.\n");
    }
    else
    {
        printf("Grade: F\n");
        printf("Don't give up! Keep learning and try again.\n");
    }

}

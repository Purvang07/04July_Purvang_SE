#include <stdio.h>

int main()
{
    int numbers[10];
    int i, j;
    int max, min;
    int temp;
    float mean;
    float distanceMin, distanceMax;

    // Accept exactly 10 integers
    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first number is minimum and maximum
    min = numbers[0];
    max = numbers[0];

    // Find minimum and maximum
    for (i = 1; i < 10; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }

        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    // Calculate mean
    int sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum = sum + numbers[i];
    }

    mean = (float)sum / 10;

    // Sort the array in ascending order
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Display minimum, maximum and mean
    printf("\n===== Results =====\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean: %.2f\n", mean);

    // Display sorted array
    printf("\nSorted Array:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Calculate distance of mean from minimum and maximum
    distanceMin = mean - min;
    distanceMax = max - mean;

    // Check where the mean is closer
    if (distanceMin < distanceMax)
    {
        printf("\nThe mean is closer to the minimum.\n");
    }
    else if (distanceMax < distanceMin)
    {
        printf("\nThe mean is closer to the maximum.\n");
    }
    else
    {
        printf("\nThe mean is exactly midway between the minimum and maximum.\n");
    }

    return 0;
}

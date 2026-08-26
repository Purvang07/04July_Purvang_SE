#include <stdio.h>
void incrementFollowers(int *followers, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}

main()
{
    int followers[5] = {1000, 2500, 3500, 4200, 5000};

    incrementFollowers(followers, 5);

    printf("Updated Followers:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", followers[i]);
    }

}

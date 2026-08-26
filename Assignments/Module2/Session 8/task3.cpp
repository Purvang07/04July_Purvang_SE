#include <stdio.h>

// Pass by Value
void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("Inside pass-by-value: %d\n", followers);
}

// Pass by Reference
void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
    printf("Inside pass-by-reference: %d\n", *followers);
}

int main()
{
    int followers = 5000;

    printf("Original followers: %d\n", followers);

    increaseFollowersByValue(followers);
    printf("After pass-by-value: %d\n", followers);

    increaseFollowersByReference(&followers);
    printf("After pass-by-reference: %d\n", followers);

    return 0;
}

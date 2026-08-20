#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    scanf(" %[^\n]", team);

    if (strcmp(team, "Mumbai Indians") == 0)
    {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "Chennai Super Kings") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "Royal Challengers Bengaluru") == 0)
    {
        printf("Play Bold, RCB!\n");
    }
    else if (strcmp(team, "Kolkata Knight Riders") == 0)
    {
        printf("Korbo Lorbo Jeetbo!\n");
    }
    else if (strcmp(team, "Rajasthan Royals") == 0)
    {
        printf("Halla Bol, Rajasthan Royals!\n");
    }
    else
    {
        printf("Team not found!\n");
    }

    return 0;
}

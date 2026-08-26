#include<stdio.h>
#include<string.h>
main()
{
	char user1[50];
	char user2[50];
	printf("Enter a username1: ");
	scanf("%s", &user1);
	printf("Enter a username2: ");
	scanf("%s", &user2);
	if(strcmp(user1, user2) == 0)
	{
		printf("\nBoth are same!");
	}
	else
	{
		printf("\nBoth are different!");
	}
}


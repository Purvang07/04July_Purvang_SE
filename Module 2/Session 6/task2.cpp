#include<stdio.h>
#include<string.h>
main()
{
	int choice;
	char team1[30] = "Mumbai Indians";
	char team2[30] = "Chennai Super Kings";
	char team3[30] = "Royal Challengers Bengaluru";
	char newTeam[30];
	
	while(1)
	{
		printf("\n-------IPL Fan Menu-------------\n");
		printf("1. View favorite IPL Teams\n");
		printf("2. Add a New Team\n");
		printf("3. Exist\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nFavorite IPL Teams:\n");
				printf("1. %s\n", team1);
				printf("2. %s\n", team2);
				printf("3. %s\n", team3);
				break;
				
			case 2:
				printf("Enter a new IPL tean: ");
				scanf("  %[^\n]", newTeam);
				strcpy(team3, newTeam);
				printf("New team added successfully!\n");
				break;
			case 3:
				printf("Thank you! Existing the program.\n");
				return 0;
			default:
				printf("Invalid choice! Please try again.\n");
		}
	}
	return 0;
}

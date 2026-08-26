#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
main()
{
	char songs[3][30] = {
		"Believer",
		"Shape of You",
		"Perfect"
	};
	
	char guess[30];
	int randomIndex;
	
	srand(time(NULL));
	randomIndex = rand() % 3;
	printf("========Guess the Song Game==========\n");
	do{
		printf("Guess the song: ");
		scanf(" %[^\n]", guess);
		if(strcmp(guess, songs[randomIndex]) != 0)
		{
			printf("Wrong guess! Try again.\n");
		}
	} while (strcmp(guess, songs[randomIndex]) != 0);
	printf("Congratulations! You guessed the correct song: %s\n", songs[randomIndex]);
	
}

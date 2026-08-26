#include<stdio.h>
main()
{
	int minutes[7];
	int i;
	printf("Music Listening Logger\n");
	
	//Take music listening time for each day
	for(i=0;i<7;i++)
	{
		printf("Enter munites listened on day %d: ",i+1);
		scanf("%d", &minutes[i]);
	}
	//Display the stored data
	
	printf("\nMusic Listening Time:\n");
	for(i=0;i<7;i++)
	{
		printf("Day %d: %d minutes\n", i+1, minutes[i]);
	}

}

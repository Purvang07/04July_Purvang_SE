#include<stdio.h>
main()
{
	int cricketScores[3][2] = {
		{180, 175},
		{150, 165},
		{210, 198}
	};
	for(int i=0;i<3;i++)
	{
		if(cricketScores[i][0] > cricketScores[i][1])
		{
			printf("Match %d highest score: %d\n", i+1, cricketScores[i][0]);
		}
		else
		{
			printf("Match %d highest score: %d\n", i+1, cricketScores[i][1]);
		}
	}
		
}

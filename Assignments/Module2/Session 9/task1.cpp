#include<stdio.h>
main()
{
	int dailySteps[7] = {2000,3000,4000,5000,6000,7000,8000};
	for(int i=0;i<7;i++)
	{
		printf("Day %d: %d steps\n",i+1, dailySteps[i]);
	}
	
}

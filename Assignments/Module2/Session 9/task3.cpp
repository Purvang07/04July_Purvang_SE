#include<stdio.h>
float calculateAverage(int orders[])
{
	int sum = 0;
	
	for(int i=0;i<7;i++)
	{
		sum = sum + orders[i];
	}
	return (float)sum / 7; 
}
main()
{
	int order[7] = {250, 180, 300, 220, 150, 400, 200};
	float average = calculateAverage(order);
	printf("Average weekly spend: %2.f\n", average);
}

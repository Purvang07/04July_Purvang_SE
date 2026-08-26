#include<stdio.h>
#include<stdbool.h>

bool isEligibleForOffer(int age, float orderValue)
{
	return (age >= 18 && orderValue > 500);
}
int main()
{
	int age = 20;
	float orderValue = 750.00;
	if (isEligibleForOffer(age, orderValue))
	{
		printf("User is eligible for the offer.\n");
	}
	else
	{
		printf("User is not eligible for the offer.\n");
	}
	return 0;
}

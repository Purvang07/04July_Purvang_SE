#include<stdio.h>

main()
{
	float amount, finalAmount;
	printf("Enter the total cart amount: ");
	scanf("%f", &amount);
	finalAmount = amount;
	if(amount > 1000)
	{
		if(amount > 2000)
		{
			finalAmount = amount - (amount * 20 / 100);
			printf("20%% discount applied.\n");
		}
		else
		{
			finalAmount = amount - (amount * 10 / 100);
			printf("10%% discount applied.\n");
		}
	}
	else
	{
		printf("No discount applied");
	}
	printf("\nFinal Amount to Pay: %.2f\n", finalAmount);
	return 0;
}

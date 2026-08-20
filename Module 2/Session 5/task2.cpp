#include<stdio.h>
main()
{
	int choice;
	printf("Time to choose your meal ");
	printf("\n1. Breakfast: ");
	printf("\n2. Lunch: ");
	printf("\n3. Dinner: ");
	printf("\n4. Snacks: ");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Omelette with Tea");
			break;
		case 2:
			printf("Chicken Biryani with soft drink");
			break;
		case 3:
			printf("Fish dishes with buttermilk");
			break;
		case 4:
			printf("Sweet burn with Tea");
			break;
		default:
			printf("Try some fruits!");
			break;
		}
}


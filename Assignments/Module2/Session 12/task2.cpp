#include<stdio.h>
struct FoodItem
{
	char itemName[50];
	float price;
	float rating;
};
 main()
 {
 	struct FoodItem it[50];
 	int i,n;
 	printf("Enter no. of items: ");
 	scanf("%d", &n);
 	for(i=1;i<=n;i++)
 	{		printf("Enter food item: ");
 		scanf("%s", &it[i].itemName);
 		printf("Enter food price: ");
 		scanf("%f", &it[i].price);
 		printf("Enter food rating: ");
 		scanf("%f", &it[i].rating);
	}
	for(i=1;i<=n;i++)
	{
		printf("Food item: %s\n",it[i].itemName);
		printf("Food price: %.2f\n",it[i].price);
		printf("Food rating: %.2f\n",it[i].rating);
		printf("--------------------------------\n");
	}
 }

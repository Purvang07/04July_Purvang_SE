#include<stdio.h>
#include<string.h>
void addToCart(char cart[][30], int *count, char product[])
{
	strcpy(cart[*count], product);
	(*count)++;
	printf("\nUpdated Cart:\n");
	for(int i=0;i<*count;i++)
	{
		printf("%d .%s\n",i+1, cart[i]);
	}
}
main()
{
	char cart[5][30];
	int count=0;
	
	
	addToCart(cart, &count, "Laptop");
	
	addToCart(cart, &count, "Mouse");
	printf("\nCart outside function:\n");
	for(int i=0;i<count;i++)
	{
		printf("%d. %s\n",i+1, cart[i]);
	}
	
}

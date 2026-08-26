#include<stdio.h>
void formatprice(float price)
{
	printf("Rs%.2f\n",price);	
}
main()
{
	float price1 = 12000;
	float price2 = 15000;
	float price3 = 18000;
	printf("Product 1: ");
	formatprice(price1);
	
	printf("Product 2: ");
	formatprice(price2);
	
	printf("Product 3: ");
	formatprice(price3);
	
}

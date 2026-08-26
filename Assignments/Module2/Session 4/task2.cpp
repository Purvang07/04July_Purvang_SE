#include<stdio.h>
#include<stdbool.h>

int main()
{
	float productPrice = 5000.0;
	float discountPercent = 20.0;
	bool isMember = true;
	
	float discountAmount, finalPrice;
	
	//Apply normal discount
	discountAmount = (productPrice * discountPercent) / 100;
	finalPrice = productPrice - discountAmount;
	
	//Apply extra 5% discount for members
	if(isMember)
	{
		finalPrice = finalPrice - (finalPrice * 5 / 100);
	}
	printf("Product Price: %.2f\n", productPrice);
	printf("Discount : %.0f%%\n", discountPercent);
	printf("Member: %s\n", isMember ? "Yes" : "No");
	printf("Final price: %.2f\n", finalPrice);
	
	return 0;
}
	


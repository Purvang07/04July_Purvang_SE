#include<stdio.h>
#include<ctype.h>
void capitalizeFirstLetter(char text[])
{
	text[0] = toupper(text[0]);
}
main()
{
	char productName[] = "laptop";
	char username[] = "purvang";
	
	capitalizeFirstLetter(productName);
	capitalizeFirstLetter(username);
	printf("Product Name: %s\n", productName);
	printf("Username: %s\n", username);
}

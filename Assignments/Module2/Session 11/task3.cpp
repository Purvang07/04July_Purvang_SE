#include<stdio.h>
main()
{
	int arr[5] = {255,300,350,400,200};
	int *ptr = arr;
	int i;
	for(i=0;i<5;i++)
	{
		/*printf("No. of order: %d",arr[i]);
		printf("\nNo. of order add: %d", &arr[i]);
		printf("\n-------------------\n");*/
		printf("Order amount: %d, Address: %p\n",arr[i],&ptr);
	}
	
	
}

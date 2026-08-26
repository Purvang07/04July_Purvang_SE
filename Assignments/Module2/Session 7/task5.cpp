#include<stdio.h>
main()
{
	int rows, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	for(i=1;i<=rows;i++)
	{
		//Print spaces
		for(j=1;j<=rows-i;j++)
		{
			printf(" ");
			
		}
		//Print starts
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

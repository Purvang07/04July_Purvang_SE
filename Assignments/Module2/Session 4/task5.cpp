#include<stdio.h>

main()
{
	int followerCount = 100;
	printf("Initial followerCount = %d\n", followerCount);
	
	//Pre-increment
	printf("Using pre-increment (++followerCount): %d\n", ++followerCount);
	printf("Value after pre-increment : %d\n", followerCount);
	
	//Resent value
	followerCount = 100;
	
	//Post-increment
	printf("Using pre-increment (followerCount++): %d\n", followerCount++);
	printf("Value after pre-increment : %d\n", followerCount);
	
}

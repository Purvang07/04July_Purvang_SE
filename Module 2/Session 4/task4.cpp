#include<stdio.h>
main()
{
	int likes;
	int comments;
	int shares;
	printf("Enter a likes: ");
	scanf("%d", &likes);
	
	printf("Enter a comments: ");
	scanf("%d", &comments);
	
	printf("Enter a shares: ");
	scanf("%d", &shares);
	if(likes >= 1000 || (comments > 200 && shares >= 50))
	{
		printf("The post is Trending.\n");
	}
	else
	{
		printf("The post is not Trending,\mn");
	}
}

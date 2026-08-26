#include<stdio.h>
main()
{
	int likes=101;
	int *ptrlikes;
	ptrlikes = &likes;
	printf("Value of likes: %d",likes);
	printf("\nAddress of stored	in ptrlikes: %p\n", (void *)ptrlikes);
	
}

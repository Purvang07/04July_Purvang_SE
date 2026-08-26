#include<stdio.h>
void swapPlaylistCounts(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
main()
{
	int playlist1 = 100;
	int playlist2 = 200;
	printf("Before swaping: \n");
	printf("Playlist 1= %d songs\n", playlist1);
	printf("Playlist 2= %d songs\n", playlist2);
	
	swapPlaylistCounts(&playlist1, &playlist2);
	printf("\nAfter swaping: \n");
	printf("Playlist 1= %d songs\n", playlist1);
	printf("Playlist 2= %d songs\n", playlist2);
}

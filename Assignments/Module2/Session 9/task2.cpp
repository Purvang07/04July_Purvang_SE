#include<stdio.h>
 main()
 {
 	int playlistRatings[3][5] = {
	 {4, 5, 4, 3, 5},
	 {5, 4, 5, 5, 4},
	 {3, 4, 4, 5, 3}
	 };
	 printf("Ratings for the second playlist:\n");
	 for(int i=0;i<5;i++)
	 {
	 	printf("%d ", playlistRatings[2][i]);
	 }
	 
 }

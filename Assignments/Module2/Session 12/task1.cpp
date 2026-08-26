#include<stdio.h>
struct playlist
{
	char title[30];
	char artist[30];
	int sec;
};
main()
{
	struct playlist song = {"Kesariya","Arjit Singh", 265};
	printf("Song Title: %s\n", song.title);
	printf("Artist name: %s\n", song.artist);
	printf("Duration: %d seconds\n", song.sec);

}

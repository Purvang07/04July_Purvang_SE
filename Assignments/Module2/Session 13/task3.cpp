#include<stdio.h>
main()
{
	FILE *file;
	file = fopen("playlist.txt", "a");
	fprintf(file, "Nibooda\n");
    fprintf(file, "Zinda hu\n");

    fclose(file);
	printf("Songs added to playlist.txt successfully.");

}

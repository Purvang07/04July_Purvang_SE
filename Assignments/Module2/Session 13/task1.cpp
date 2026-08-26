#include<stdio.h>
main()
{
	FILE *file;
	file = fopen("playlist.txt", "w");
	fprintf(file, "Tum Hi Ho\n");
    fprintf(file, "Kesariya\n");
    fprintf(file, "Apna Bana Le\n");

    fclose(file);
	printf("Songs written to playlist.txt successfully.");

}

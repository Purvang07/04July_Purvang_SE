#include<stdio.h>
main()
{
	FILE *f1;
	char song[50];
	
	f1 = fopen("playlist.txt","r");
	while(fgets(song, sizeof(song), f1)!= NULL)
	{
		printf("%s", song);
	}
	fclose(f1);

}

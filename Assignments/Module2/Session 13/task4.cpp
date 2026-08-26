#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char song[100];
    char lowerSong[100];

    file = fopen("playlist.txt", "r");

    while (fgets(song, sizeof(song), file) != NULL)
    {
        strcpy(lowerSong, song);

        for (int i = 0; lowerSong[i] != '\0'; i++)
        {
            lowerSong[i] = tolower(lowerSong[i]);
        }

        if (strstr(lowerSong, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}


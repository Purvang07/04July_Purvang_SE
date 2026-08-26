#include<stdio.h>
void getUserInitials(char name[])
{
	printf("%c", name[0]);
	for(int i=0;name[i] != '\0';i++)
	{
		if(name[i] == ' ')
		{
			printf("%c", name[i+1]);
		}
	}
}
main()
{
	char name[] = "Virat Kohli";
	printf("Initials: ");
	getUserInitials(name);
}

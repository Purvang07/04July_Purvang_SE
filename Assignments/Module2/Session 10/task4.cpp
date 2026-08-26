#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	char username[40];
	printf("Enter full name: ");
	scanf("%s",&name);
	
	if(strlen(name)>=5)
	{
		strncpy(username,name,5);
		username[5]	= '\0';
		
	}
	else
	{
		strcpy(username, name);
	}
	printf("\nUsername : %s",username);
	
}

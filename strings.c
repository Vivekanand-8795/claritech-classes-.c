#include<stdio.h>

void main()
{
	char name[20] = {'v','i','v','e','k','\0'};
	
	char name2[20] = "vivek";
	
	printf("%s", name);	
	printf("\n%s", name2);	
	
	char uname[20];
	
	printf("\nEnter your name : ");
//	scanf("%s", &uname);
//	scanf("%[^\n]s", &uname);
	gets(uname);
	
//	printf("\nWelcome %s", uname);
	printf("\nWelcome ");
	puts(uname);
}

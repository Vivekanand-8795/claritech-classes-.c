#include<stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("data.txt", "r");
	
	char str[100];
	
	while(fscanf(fp, "%s", str) != EOF)
	{
		printf("%s ", str);
	}
	
	fclose(fp);
}

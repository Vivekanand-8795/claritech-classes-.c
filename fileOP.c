#include<stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("data.txt", "r");
	
	char ch;
	
	while((ch = getc(fp)) != EOF)
	{
		printf("%c", ch);
	}
	
	fclose(fp);
}

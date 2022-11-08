#include<stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("new.txt", "w");
	
	fputc('B', fp);
	
	fclose(fp);
}

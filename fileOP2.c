#include<stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("data.txt", "w");
	
	fprintf(fp, "This is new content.");
	
	fclose(fp);
}

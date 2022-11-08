#include<stdio.h>
#include<string.h>

void main()
{
	FILE* fp;
	
	fp = fopen("emp_data.txt", "a");
	
	char name[20];
	printf("Enter your name : ");
	scanf("%s", name);
	
	char data[100] = "\nWelcome ";
	strcat(data,name);
	
	fprintf(fp, data);
	
	fclose(fp);
	
	fp = fopen("emp_data.txt", "r");
	
	char str[100];
	
	while(fscanf(fp, "%s", str) != EOF)
	{
		printf("%s ", str);
	}
	
	fclose(fp);
}

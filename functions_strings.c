#include<stdio.h>
#include<string.h>

void main()
{
	char str[20] = "Welcome to C";
	
//	strlen()
	printf("length of string  : %d", strlen(str));
	
//	strupr()
	printf("\nString uppercase : %s", strupr(str));
	
//	strlwr()
	printf("\nString lowercase : %s", strlwr(str));
	
//	strrev()
	printf("\nString reverse : %s", strrev(str));
	
//	strcpy()
	char name[10] = "Vivek";
	char fname[10];
	strcpy(fname,name);
	printf("\nCopied string : %s", fname);
	
//	strcat()
	char str1[10] = "Vivek ", str2[10] = "Gupta";
	strcat(str1,str2);
	printf("\nConcatenated string : %s", str1);
	
//	strcmp()
	char str3[10] = "Riya", str4[10] = "Riya";
	int cmp = strcmp(str3,str4);
	if(cmp == 0)
	{
		printf("\nStrings are equal");
	}
	else
	{
		printf("\nStrings are not equal");
	}
}

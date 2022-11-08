#include<stdio.h>

void main(int args, char* argsv[])
{
	printf("Your program name is %s", argsv[0]);
	
	if(args < 2)
	{
		printf("\nThere are no arguments passed");
	}
	else
	{
		printf("\nArgument1 is : %s", argsv[1]);
		printf("\nArgument2 is : %s", argsv[2]);
	}
	
}

#include<stdio.h>

void main()
{
//	int num[3][4];
//	
//	num[0][0] = 10;
	
	int num[3][4] = { {10,20,30,40}, {50,60,70,80}, {90,10,20,30} };
	
	int i,j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
	
	
}

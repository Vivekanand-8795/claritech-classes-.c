#include<stdio.h>

void main()
{
	int marks[5], i, total;
	
	printf("Enter marks of 5 subjects : ");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &marks[i]);
		total = total + marks[i];
	}
	
	printf("\nYou entered : \n");
	for(i = 0; i < 5; i++)
	{
		printf("Marks of subject %d : %d \n",i+1 , marks[i]);
	}
	
	printf("\nTotal marks : %d", total);
	
	float avg = (float)total / 5;
	printf("\nAverage marks : %.2f", avg);
}

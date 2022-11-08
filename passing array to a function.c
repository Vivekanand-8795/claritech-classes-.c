#include<stdio.h>

void total(int arr[5])
{
	int i, sum = 0;
	for(i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}
	
	printf("\nTotal marks : %d", sum);
}

void main()
{
	int marks[5];
	int i;
	printf("Enter marks of 5 subjects : ");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &marks[i]);
	}
	
	total(marks);
}

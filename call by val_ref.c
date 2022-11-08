#include<stdio.h>

void add(int a, int b)
{
	printf("\nAddition is : %d", a+b);
}

void main()
{
//	add(15,25);		// call by value
	int x, y;
	printf("Enter two numbers : ");
	scanf("%d%d", &x, &y);
	
	add(x,y);		// call by reference
}

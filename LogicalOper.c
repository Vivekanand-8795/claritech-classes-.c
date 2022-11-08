#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);
	
	printf("a < b && a == 5 : %d", (a < b && a == 5));
	printf("\na < b || a == 5 : %d", (a < b || a == 5));
	printf("\n! (a < b): %d", !(a < b));
	
}

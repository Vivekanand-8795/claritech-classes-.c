#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);
	
	printf("a == b : %d", (a == b));
	printf("\na != b : %d", (a != b));
	printf("\na < b : %d", (a < b));
	printf("\na > b : %d", (a > b));
	printf("\na <= b : %d", (a <= b));
	printf("\na >= b : %d", (a >= b));

}

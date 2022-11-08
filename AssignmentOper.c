#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);
	
	a += b; 	// a = a + b
	printf("Value of a, after a += b : %d", a);
	
	a -= b; 	// a = a + b
	printf("\nValue of a, after a -= b : %d", a);
	
	a *= b; 	// a = a + b
	printf("\nValue of a, after a *= b : %d", a);
	
	a /= b; 	// a = a + b
	printf("\nValue of a, after a /= b : %d", a);
	
	a %= b; 	// a = a + b
	printf("\nValue of a, after a %= b : %d", a);
}

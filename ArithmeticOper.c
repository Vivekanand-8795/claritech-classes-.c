#include<stdio.h>

void main()
{
	int a, b, res;
	
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	
	// addition
	res = a + b;
	printf("\nAddition is = %d", res);
	
	// subtraction
	res = a - b;
	printf("\nSubtraction is = %d", res);
	
	// multiplication
	res = a * b;
	printf("\nMultiplication is = %d", res);
	
	// division
	res = a / b;
	printf("\nDivision is = %d", res);
	
	// modulo
	res = a % b;
	printf("\nRemainder is = %d", res);
}

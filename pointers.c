#include<stdio.h>

void main()
{
	int a = 5;
	
	int *p = &a;
	
	printf("Address of a = %u", p);
	printf("\nValue stored at p = %d", *p);
	
	int **dp = &p;
	
	printf("\nAddress of p : %u", dp);
	
//	pointer arithmetic

//	increment

	p = p + 1;
	printf("\nAddress of a, after increment: %u", p);
	
//	decrement

	p = p - 1;
	printf("\nAddress of a, after decrement: %u", p);
	
//	addition
	
	p = p + 3;
	printf("\nAddress of a, after addition: %u", p);
	
//	subtraction

	p = p - 3;
	printf("\nAddress of a, after subtraction: %u", p);
}

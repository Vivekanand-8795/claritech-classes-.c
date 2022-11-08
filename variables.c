#include<stdio.h>
#include "sample.h"

// global variable
int x = 15;

void show()
{
	// local variable
	int a = 10;
//	printf("Value of x = %d", x);
}

void show2()
{
	// static variable
	static int i = 20;
	printf("\nValue of i = %d", i);
	i++;
}

void main()
{
	auto int num = 25;
	
	printf("Value of num = %d", num);
//	printf("Value of a = %d", a);
//	printf("Value of x = %d", x);

	show2();
	show2();
	show2();
	
	printf("\nValue of v = %d", v);
}

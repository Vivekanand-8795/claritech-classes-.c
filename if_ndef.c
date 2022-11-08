#include<stdio.h>
#define a 25

void main()
{
	#ifndef a
		#error Please define a first
	#else
		printf("Value of a = %d", a);
	#endif
}

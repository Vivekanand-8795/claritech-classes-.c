#include<stdio.h>
//#define a 25

void main()
{
	#ifdef a
	printf("Value of a = %d", a);
	#else
		#error Please define a first
	#endif
}

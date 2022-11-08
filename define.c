#include<stdio.h>
#define PI 3.142
#define MIN(a,b) (a < b) ? a : b


void main()
{
	printf("%f", PI);
	printf("\n%d", MIN(10,20));
	printf("\n%f", MIN(10.25,20.36));
	
	#undef PI
	printf("\n%f", PI);
}

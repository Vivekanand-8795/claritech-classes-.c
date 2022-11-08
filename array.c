#include<stdio.h>

void main()
{
//	data_type arr_name[size];

//  data_type arr_name[] = {el1, el2, el3, ....};

	int num[5];
	
	num[0] = 15;
	num[1] = 20;
	num[2] = 25;
	num[3] = 30;
	num[4] = 35;
	
	int num2[] = {10,20,30,40,50,60,45,45,74,85,5,4,5,5,5,5,46,56,65,5,
	6,6,64,4,64,6,64,64,6,46,46,46,66,3,53,5365,65,65,65,65,65,6,56,56,
	565,65,656,56,6,6,56,565,65,6,656,5,65,6,66,};
	
//	printf("%d\n", num[0]);
//	printf("%d\n", num[1]);
//	printf("%d\n", num[2]);
//	printf("%d\n", num[3]);
//	printf("%d\n", num[4]);

	int len = sizeof(num2) / sizeof(num2[0]);

//	printf("Length of num %d", len);
//	printf("\n");
	
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%d\n", num2[i]);
	}
}

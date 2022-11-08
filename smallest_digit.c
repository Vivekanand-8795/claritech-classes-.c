#include<stdio.h>
int main(){
	int a,b,small;
	printf("enter two digit number :");
	scanf("%d%d",&a,&b);
     small=(a<b)?(a):(b);
		printf("smallest number:%d",small);
	
	return 0;
}

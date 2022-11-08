#include<stdio.h>
int main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	if(n>=0&&n<=9){
		printf("single digit number");
	}else if(n>=10&&n<=99){
		printf("double digit number");
	}else if(n>=100&&n<=999){
		printf("three digit number");
	}
	return 0;
}

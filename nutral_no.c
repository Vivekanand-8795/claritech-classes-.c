#include<stdio.h>
int main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num>0){
		printf("positive number");
	}else if(num<0){
		printf("negative number");
	}else if(num==0){
		printf("nutral number");
	}
	return 0;
}

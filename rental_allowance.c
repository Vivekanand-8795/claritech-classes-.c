#include<stdio.h>
int main(){
	float hra,da,bs,ts;
printf("enter the basic salary:");
scanf("%f",&bs);
	if(bs>10001){
		hra=bs*85/100;
	}else{
		hra=bs;
	}
	da=bs*45/100;
		printf("Enter house rent allowance :");
	scanf("%f\n",&hra);
	printf("Enter dearness allowance :");
	scanf("%f\n",&da);
	ts=bs+hra+da;
	printf("total salary : %f",ts);
	return 0;
}

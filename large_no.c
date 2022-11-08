#include<stdio.h>
int main(){
	int a,b,c,large;
	printf("enter three digit");
	scanf("%d%d%d",&a,&b,&c);
	large=(a>b&&a<c)?(b):(c);
	printf("large value :%d",large);
	return 0;
}

#include<stdio.h>

struct Student{
	int id;
	char name[20];
	
	struct Details{
		char email[30];
		long long int phone;
	}d1;
}s1;

void main()
{
	printf("Enter ID : ");
	scanf("%d", &s1.id);
	printf("Enter name : ");
	scanf("%s", &s1.name);
	printf("Enter email : ");
	scanf("%s", &s1.d1.email);
	printf("Enter phone : ");
	scanf("%lld", &s1.d1.phone);
	
	printf("\nStudent ID : %d", s1.id);
	printf("\nStudent name : %s", s1.name);
	printf("\nStudent email : %s", s1.d1.email);
	printf("\nStudent phone : %lld", s1.d1.phone);
}

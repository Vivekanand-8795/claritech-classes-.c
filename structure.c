#include<stdio.h>

struct Student{
	int roll;
	char name[20];
};

struct Student s1,s2;

void main()
{
	printf("Enter roll no. : ");
	scanf("%d", &s1.roll);
	printf("Enter name : ");
	scanf("%s", &s1.name);
	printf("Enter roll no. : ");
	scanf("%d", &s2.roll);
	printf("Enter name : ");
	scanf("%s", &s2.name);
	
	printf("\nStudent roll no. : %d", s1.roll);
	printf("\nStudent name : %s", s1.name);
	printf("\nStudent roll no. : %d", s2.roll);
	printf("\nStudent name : %s", s2.name);
}

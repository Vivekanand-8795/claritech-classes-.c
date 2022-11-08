#include<stdio.h>
int main()
{   
int n,name[20],id,ix;
printf("enter the number of student :");
scanf ("%d",&n);
FILE *fptr;
fptr=fopen("rohit.txt","w");
for(i=0;i<n;i++){
	printf("enter the name:");
	scanf("%s",name);
	printf("enter the id:");
	scanf("%d",id);
	fprintf(fptr,"name:%s,id:%d",name,id);
	
	
}
fclose(fptr);
return 0;

}

#include<stdio.h>  

void main()
{  
	FILE *fp;  
	
	fp=fopen("new.txt","w"); 
	 
	fputs("hello c programming",fp);  
	
	fclose(fp);  
}  


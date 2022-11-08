#include<stdio.h>

void main()
{
	int num, rem, rev = 0, temp;
	printf("Enter a number : ");
	scanf("%d", &num);
	temp = num;
	
	while(num != 0)
	{
		rem = num % 10;
		num = num / 10;
		rev = rev * 10 + rem;
	}
	
	if(temp == rev)
	{
		printf("%d is palindrome.", temp);
	}
	else
	{
		print f("%d is not palindrome.", temp);
	}
}

#include <stdio.h>
void main()
{
	int fact=1;
	int num;
	printf("Enter the number ");
	scanf("%d",&num);
	
	
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
		printf(" factorial of given number is %d",fact);
	
	
}
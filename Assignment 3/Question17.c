#include <stdio.h>
void main()
{
	int num,fact=1;
	printf("Enter the number ");
	scanf("%d",&num);
	
	for(num;num>0;num--)
	{
		fact=fact*num;
	}
	printf("The factorial is %d",fact);
}
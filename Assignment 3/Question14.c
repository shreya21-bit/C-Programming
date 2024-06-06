#include <stdio.h>
void main()
{
	int status = 0;
	int num, i;
	printf("Enter the number ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			status++;
			break;
		}
	}
	if(status==0)
	{
		printf("The given number is  prime  number ");
	}
	else
	{
		printf("The given number is not prime number ");
	}
		
}
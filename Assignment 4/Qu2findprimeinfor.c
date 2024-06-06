#include<stdio.h>
void main()
{
	int num, i;
	printf("Enter the number ");
	scanf("%d",&num);
	int status = 0;
	
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
		printf("The given number is  prime ");
	}
	else
	{
		printf("The given number is not prime");
	}
		
}
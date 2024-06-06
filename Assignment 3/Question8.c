#include <stdio.h>
void main()
{
	int num,rem,fact;
	int sum=0;
	
	printf("Enter the number ");
	scanf("%d",&num);
	int temp=num;
	
	while(num>0)
	{
		fact = 1;
		rem=num%10;
		num=num/10;
		
		while(rem>0)
		{
			fact = fact*rem;
			rem--;
		}
		sum=sum+fact;
	}
	if(sum==temp)
	{
		printf("The given number is strong number");
	}
	else
	{
		printf("The given number is not strong number");
	}
		
	
}
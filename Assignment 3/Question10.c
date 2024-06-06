#include<stdio.h>
void main()
{
	int num,sum=0,rem,org;
	printf("Enter any Number to get sum of it's first and last digit ");
	scanf("%d",&num);
	org = num;
	
	while(num>0)
	{
		rem=num%10;
		if(num==org)
		{
			sum=sum+rem;
			
		}
		num=num/10;
		
		
		    
		
	}
	sum = sum+rem;
	printf("%d is sum of first and last digit of %d\n", sum,org);
}
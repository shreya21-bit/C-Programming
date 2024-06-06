#include<stdio.h>
void main()
{

	int fact,num, rem,temp;
	int sum=0;
	printf("enter the number= "); 
	scanf("%d", &num);
	temp=num;
	
	for(num;num>0;)
	{
		rem=num%10;
		num=num/10;
		fact=1;

		for(fact;rem>=1;rem--)
		{
			fact=fact*rem;
		}
		sum=sum+fact;
	}
		if(sum==temp)
		{ 
			printf("the number is strong");	
		}
		else
		{ 
			printf("the number is not strong");
		}
}
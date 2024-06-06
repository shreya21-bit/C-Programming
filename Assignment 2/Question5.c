#include <stdio.h>
void main()
{
	int discount, amount,total;
	char option;
	printf(" if you are a student print y or n \n");
	scanf("%c",&option);
	if(option=='y')
	{
		
		printf("enter the amount ");
		scanf("%d",&amount);
		
		if(amount>500)
		{
			printf("you got 20 percent of discount.\n");
			discount = (amount*20)/100;
			total = amount- discount;
			printf("your total amount is %d",total);
		}
		else if(amount<500)
		{
			printf("you got 10 percent of discount.\n");
			discount = (amount*10)/100;
			total = amount- discount;
			printf("your total amount is %d ",total);
		}
	}
	else if(option=='n')
		{
			printf("enter the amount ",amount);
			scanf("%d",&amount);
			if(amount>600)
		 	{
				printf("you got 15 percent of discount.\n");
				discount = (amount*15)/100;
				total = amount- discount;
				printf("your total amount is %d",total);
			}
	   		else if(amount<600)
			{
				printf("No  discount.");
			}
		}
		
	}
	

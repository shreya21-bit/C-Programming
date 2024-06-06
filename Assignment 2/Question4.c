#include <stdio.h>
void main()
{
	int choice,num , da,ta,hra,ts,bs;
	printf("1 .Check Even or Odd\n");
	printf("2. calculate basic salary\n");
	printf("which operation do you want to perform?\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{	
		printf("Enter the number ");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("Number is even");
		}
		else
		{
			printf("Number is odd");
		}
	}
	else if(choice==2)
	{
		printf("Enter the basic salary ");
		scanf("%d",&bs);
			if(bs<=5000)
			{
				da = (bs*10)/100;
				ta = (bs*20)/100;
				hra = (bs*25)/100;
				ts = bs + da + hra - ta;
			printf("Total salary is %d",ts);
			}
			else
			{
				da = (bs*15)/100;
				ta = (bs*25)/100;
				hra = (bs*30)/100;
				ts = bs + da + hra -ta;
			printf("Total salary is %d",ts);
			}
	}
	else
	{
		printf("Invalid Option");
	}
	
}
//Print amstrong number in the given range 1 to n?
#include <stdio.h>
void main()
{
	int i, start=100,end =999;  
		for(i=start;i<=end;i++)
		{
			int num=i;
			int sum=0;
			int temp=num;
				while(num>0)
				{
					int rem=num%10;
					sum=sum+(rem*rem*rem);
					num= num/10;
				}
				if(temp==sum)
				{
					printf("%d is a amstrong number\n", temp);
				}
  		}
	
}

/*
#include <stdio.h>
void main()
{
	int  i, end;
	int start=100;
	printf("Enter the End ");
	scanf("%d",&num);
	for(i=start;i<=end;i++)
	{
		int num=i;
		int sum=0;
		int temp=num;
			while(num>0)
				{
					int rem=num%10;
					sum=sum+(rem*rem*rem);
					num= num/10;
				}
				if(temp==sum)
				{
					printf("%d is a amstrong number\n", temp);
				}
	  		
	}
}
*/

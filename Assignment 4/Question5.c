//Print armstrong number in the the given range 1 to n using for loop?
#include<stdio.h>
void main()
{
	int i,start=100,end=900;
	//printf("enter the start range=");
	//scanf("%d",&start);
	//printf("enter the end range=");
	//scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
	int num=i;
	int sum=0;
	int temp=num;
		for(;num>0;)
		{
			int rem=num%10;
			sum=sum+(rem*rem*rem);
			num=num/10;
		}
			if(temp==sum)
			{
				printf("%d is a amstrong number\n",temp);
			}
	}
}


//Check number is armstrong or not?
#include<stdio.h>
void main()
{
	int i,start=1,end;
	printf("Enter the end number ");
	scanf("%d",&end);
	printf("\narmstrong number between %d and %d are:\n",start,end);
	for(i=start;i<=end;i++)
	{
		int num=i;
		int sum=0;
		int temp=num;
			while(num>0)
			{
				int rem=num%10;
				sum=sum+(rem*rem*rem);
				num=num/10;
			}
			if(temp==sum)
			{
				printf("\n%d is armstrong number\n",temp);
			}
	}
}

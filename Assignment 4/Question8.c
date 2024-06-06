//check strong number in the given range 1 to n using for loop?
#include<stdio.h>
void main()
{
 	int i,start=1,end=500,num,rem,sum,fact;
 	for(i=start;i<=end;i++)
 	{
		num=i;
		fact=1;
		sum=0;
 		for(;num>0;)
		{
			rem=num%10;
			num=num/10;
			fact=1;
			for(;rem>=1;)
			{
				fact=fact*rem;
				rem--;
			}
			sum=sum+fact;
		}
		if(sum==i)
		{
			printf("strong numbers=%d\n",i);
		}
	}
}


//print prime number in the given range 1 to n.
#include<stdio.h>
void main()
{
	int i,end,start=1,a;
	printf("Enter the end numbers");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		int num=i;
		a=1;
		int count=0;
		for(;a<=num;a++)
		{
			if(num%a==0)
			{
				count++;
			}
			a++;
		}
		if(count==2)
		{
			printf("\n%d",i);
		}
	}
}

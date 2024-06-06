//check perfect number in the given range 1 to n?
#include<stdio.h>
void main()
{
	int v,start=1,end=500,num,i,a,rem;
	for(v=start;v<=end;v++)
	{
		num=v;
		i=1;
		a=0;
		while(i<num)
		{
			rem=num%i;
			if(rem==0)
			{
				a=a+i;
			}
			i++;
		}
		if(a==num)
		{
			printf("Perfect numbers: %d\n",a);
		}
	}
}



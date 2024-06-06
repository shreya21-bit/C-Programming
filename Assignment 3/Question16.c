#include <stdio.h>
void main()
{
	int num, i;
	int sum=0;
	printf("Enter the number ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		
		if(num%i==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("The number  %d is a perfect number",num);
	}
	else
	{
		printf("The number %d is not a perfect number ",num);
	}
}
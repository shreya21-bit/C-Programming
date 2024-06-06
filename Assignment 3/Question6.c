#include <stdio.h>
void main()
{
	int num,sum;
	int i = 1;
	printf("Enter the num ");
	scanf("%d",&num);
	while(i<num)
{
	if(num%i==0)
	{
		sum=sum+i;
	}
	i++;
}
if(sum==num)
{
	printf("Number is perfect");
}
else
{
	printf("Number is not perfect");
}	
}

#include <stdio.h>
void main()
{
	int num;
	printf("Enter the number ");
	scanf("%d",&num);
	int i =1; 
	int count = 0;
	
	
	while(i<=num)
	{
		if(num%i==0)
		{
			count++;
		}
		i++;
	}
		if(count==2)
		{
			printf("The Number is prime\n ");
		}
		else
		{
			printf("The Number is not prime\n");
		}
	
}
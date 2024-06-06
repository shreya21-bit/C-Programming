#include <stdio.h>
void main()
{
	int num, rem , temp;
	int sum = 0;
	printf("Enter the number ");
	scanf("%d",&num);
	temp=num;
	
	while(num>0)
	{
		rem = num%10;    // 145%10=5 , 14%10 = 
		sum = sum+(rem*rem*rem);
		num = num/10;
	}
	if(temp==sum)
	{
		printf("The  number is amstronge number");
	}
	else
	{
		printf("The  number is not amstronge number");
	}
		
}
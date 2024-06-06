#include <stdio.h>
//<math.h>
//power();
void main()
{
	int num, rem, temp;
	int sum = 0;
	printf("Enter the number ");
	scanf("%d",&num);
	temp = num;
	
	for(   ;num>0;    )  // here we can't insert increment/decrement bcoz we don't have to find range.
	{
		rem = num%10;
		sum = sum+(rem*rem*rem);
		num = num/10;
	}
	if(temp==sum)
	{
		printf("The  number is amstronge number \n");
	}
	else
	{
		printf("The  number is not amstronge number \n");
	}
	
	
}
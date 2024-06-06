//Write a program to find greatest three number using nested if-else with function.
void greatest(int*,int*,int*);
#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the first value ");
	scanf("%d",&a);
	printf("Enter the second value ");
	scanf("%d",&b);
	printf("Enter the third value ");
	scanf("%d",&c);
	greatest(&a, &b, &c);
}
void greatest(int* a,int* b,int* c)
{
	
	
	if((*a)>(*b))
	{
		if((*a)>(*c))
		{
			printf("First value is greater");
		}
		else
		printf("Third value is greater");
		
	}
	else
	{
		if((*b)>(*c))
		{
			printf("Second value  is greater");
		}
		else
			printf("Third value is greater");
	
	}
}
	
	

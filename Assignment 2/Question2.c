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
	
	if(a>b){
		if(a>c)
		{
			printf("a is greater");
		}
		else
		printf("c is greater");
		
	}
	else
	{
		if(b>c)
		{
			printf("b is greater");
		}
		else
			printf("c is greater");
	}
	
}
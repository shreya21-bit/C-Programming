//find even and odd
#include<stdio.h>
void evenodd(int*);
void main()
{
	int num;
	printf("Enter the number ");
	scanf("%d",&num);
	evenodd(&num);
	
}
void evenodd(int* num)	
{
	
	//printf("Enter the number ");
	//scanf("%d",&num);
    if((*num)%2==0)
   		printf("The number is even ");
    else 
   		printf("The number is odd ");
}



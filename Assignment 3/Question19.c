#include<stdio.h>
void main()
{
	int num,rem, temp;
	int rev=0;
	printf("enter the number=");
	scanf("%d",&num);
	temp=num;
	
	for(num;num>0;)
	{ 
		rem=num%10; 
		rev=(rev*10)+rem; 
		num=num/10;
	} 
	if(temp==rev)
	{
		printf("%d is a palindrom",temp);
	}
	else
	{
		printf("%d is not a palindrom",temp);
	}
}


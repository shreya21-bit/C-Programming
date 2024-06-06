#include<stdio.h>
void digit(int*);
void main()
{
	int num;
	printf("Enter three digit number ");
	scanf("%d",&num);
	digit(&num);
}
void digit(int* num)
{
	int sum=0,rev=0,rem,temp=0;
	temp=*num;
	
	if(*num>=100 && *num<=999)
	{
		rem=*num%10;  //3
		*num=*num/10;  //56
		
		sum=sum+rem; //3
		rev=(rev*10)+rem; //3
		
		rem=*num%10; //6
		*num=*num/10; //5
		
		sum=sum+rem; //9
		rev=(rev*10)+rem; //36
		
		rem=*num%10;  //5
		*num=*num/10;  //0
		
		sum=sum+rem; //14
		rev=(rev*10)+rem; //365
		
		printf("sum of %d is %d ",temp,sum);
		printf("\n Reverse of %d is %d ",temp,rev);
		
	}
	else
	{
		printf("Number is invalid");
	}
}
	

#include<stdio.h>
void person(char*,int*);
void main()
{
	int age;
	char gender='f';
	printf("Enter the Age ");
	scanf("%d",&age);
	person(&gender,&age);
}
void person(char* gender,int* age)
{
	
	//printf("Enter the Age ");
	//scanf("%d",&age);
	if((*gender)=='f')
	{
		if((*age)>=18)
			printf("female is eligible to marry");
		else
			printf("female is not eligible to marry");
	}
	else
	{
		if((*age)>=21)
			printf("male is eligible to marry");
		else
			printf("male is not  eligible to marry");
	}
}
#include <stdio.h>
void main()
{
	char gender = 'm';
	int age = 23;
	if(gender == 'm')
	{
		if(age>=21)
		{
			printf("eligible to marry");
		}
		else
		{
			printf("not eligible to marry");
		}
	}
	else
	{
		if(age>=18)
		{
			printf("eligible to marry");
		}
		else
		{
			printf("not eligible to marry");
		}
	}
	
}
#include <stdio.h>
void main()
{
	int a = 0 ;
	int num, b;
	printf("Enter Your Number ");
	scanf("%d",&num);
	
	for(a=1;a<=10;a++)
	{
		b = num*a;
		printf("Table is %d\n",b);
	}
}
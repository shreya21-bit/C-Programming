#include <stdio.h>
void main()
{
	int op,ans, num1,num2;
	printf("which operation do you want to perform?\n");
	scanf("%d",&op);
	printf("Enter num1 ");
	scanf("%d",&num1);
	printf("Enter num2 ");
	scanf("%d",&num2);
	if(op==1)
	{
		ans = num1 +num2;
		printf("The addition of given number is %d\n",ans);
	}
	else if(op==2)
	{
		ans = num1 - num2;
		printf("The subtraction of given number is%d\n",ans);
	}
	else if(op==3)
	{
		ans = num1 * num2;
		printf("The multiplication of given number is %d\n",ans);
	}
	else if(op==4)
	{
		ans = num1 / num2;
		printf("The division of given of number is %d\n",ans);
	}
	else if(op==5)
	{
		ans = num1 % num2;
		printf("The mod of given number is %d\n",ans);
	}
	else{
		printf("Default Operation");
	}
}
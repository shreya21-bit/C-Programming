#include <stdio.h>
void main()
{
	int range1, range2;
	int sum =0;
	printf("Enter the range1 ");
	scanf("%d",&range1);
	printf("Enter the range2 ");
	scanf("%d",&range2);
	
	while(range1<=range2)
	{
		sum = sum + range1;
		range1++;	
	}
	printf("The sum of number is %d ", sum);
	
}
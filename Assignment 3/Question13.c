#include <stdio.h>
void main()
{
	int range1, range2;
	int sum =0;
	int i;
	printf("Enter the range1 ");
	scanf("%d",&range1);
	printf("Enter the range2 ");
	scanf("%d",&range2);
	
	for(i=range1;i<=range2;i++)
	{
		sum = sum + i;
		
			
	}
	printf("The sum of number is %d ", sum);
	
}
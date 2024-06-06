//Find the price of item when discount it given(specify different discount based on price)
#include <stdio.h>
void totalprice(int*);
void main()
{
	int price;
	printf("enter the price: ");
	scanf("%d",&price);
	totalprice(&price);
}
void totalprice(int* price)
{
	/*int price,amt,dis;
	printf("enter the price: ");
	scanf("%d",&price);*/
	int amt,dis;
	
	if((*price)<1000)
	{
		dis = ((*price)*5)/100;
		amt = (*price)-dis;
		printf("amount after discount is %d",amt);
	}
	else
	{
		if((*price)<1000 && (*price)>1500)
		{
			dis = ((*price)*8)/100;
			amt = (*price)-dis;
			printf("amount after discount is %d",amt);
		}
		else
		{
			if((*price)<1500 && (*price)>2000)
			dis= ((*price)*10)/100;
			amt=(*price)-dis;
			printf("amount after discount is %d",amt);
		}
	}
}
	

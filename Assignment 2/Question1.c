#include <stdio.h>
void main()
{
	int price,amt,dis;
	printf("enter the price: ");
	scanf("%d",&price);
	if(price<1000)
	{
		dis = (price*5)/100;
		amt = price-dis;
		printf("amount after discount is %d",amt);
	}
	else
	{
		if(price<1000 && price>1500)
		{
			dis = (price*8)/100;
			amt = price-dis;
			printf("amount after discount is %d",amt);
		}
		else
		{
			if(price<1500 && price>2000)
			dis= (price*10)/100;
			amt=price-dis;
			printf("amount after discount is %d",amt);
		}
	}
}
#include <stdio.h>
void main()
{
	int ts,da,ta,hra;
	int bs = 7500;
	
	
	if(bs<=5000)
	{
		da = (bs*10)/100;
		ta = (bs*20)/100;
		hra = (bs*25)/100;
		ts = bs + da + hra - ta;
	printf("%d",ts);
	}
	else
	{
		da = (bs*15)/100;
		ta = (bs*25)/100;
		hra = (bs*30)/100;
		ts = bs + da + hra -ta;
	printf("%d",ts);
	}
}
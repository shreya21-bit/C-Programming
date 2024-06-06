//Total salary
#include<stdio.h>
void totalsalary(int*);
void main()
{ 
	int basic;
	printf("Enter basic salary ");
	scanf("%d",&basic);
	totalsalary(&basic);
	
}
    void totalsalary(int* basic)
    {
		
		//printf("Enter basic salary ");
		//scanf("%d",&basic);
		int da,ta,hra,total;
		if((*basic)<=5000)
		{
			da=(*basic)*10/100;
			ta=(*basic)*20/100;
			hra=(*basic)*25/100;
			
			total=(*basic)+ta+da-hra;
	        printf("Total salary is %d",total);
	        
			
		}
		else
		{
			da=(*basic)*15/100;
			ta=(*basic)*25/100;
			hra=(*basic)*30/100;
			
			total=(*basic)+ta+da-hra;
	        printf("Total salary is %d",total);
	        
		}
	}
	

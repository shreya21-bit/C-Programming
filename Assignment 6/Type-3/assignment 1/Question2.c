//finding area and perimeter of rectangle or circle
#include<stdio.h>
void area(int*,int*);
void perimeter(int*,int*);
void main()
{
	int l=20, b=30;
	area(&l,&b);
	perimeter(&l,&b);
}
void area(int* l,int* b)
{
	
	int c=(*l)*(*b);
	printf("The area of rectangle is %d\n",c);
}
void perimeter(int* l, int* b)
{
	
	int d=2*(*l+*b);
	printf("The primeter of rectangle is %d",d);
}
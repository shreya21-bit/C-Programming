//Finding F from C temp.
#include<stdio.h>
void convert(float*);//declear
void main()
{
	float f= 35.6;  // call
	convert(&f);
}
void convert(float* f) //define
{
	
	float c = (*f-32)*5/9;
	printf("The converted temperature is %f ",c);
}
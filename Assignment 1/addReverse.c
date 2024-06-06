#include <stdio.h>
void main()
{
	int num = 123;
	int sum = 0;
	int rev = 0;
	int rem ;
	
	rem = num%10;                  //123%10 =3
	rev = (rev*10)+rem;            // Reverse no. 3
	sum = sum + rem;               // 0+3=3
	num = num/10;                  // 12
	
	rem = num%10;                  // 12%10 = 2
	rev = (rev*10)+rem;            // (3*10)+2 = 32
	sum = sum +rem;                // 3+2
	num = num/10;                  // 10/10 = 1
	
	rem = num%10;                  // 1%10 = 1
	rev = (rev*10)+rem;            // (32*10)+1 =321
	sum = sum + rem;               // 3+2+1=6
	num = num/10;                  // 1/10 = 0
	
printf("%d\n",sum);
printf("%d",rev);
	
	
}
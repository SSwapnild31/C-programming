#include<stdio.h>
void main()
{
	int num=7343,r,sum=0;

	//for( ;num;sum=0)		//in for loop if we assign sum=0 loop will go infinite & nothing will be printed.
	
	for( ; num ; num=num/10)	//if we declare sum=0 at the place of initialization o/p is same as normal loop.
	{
		//sum=0;		//In every iteration sum becomes zero.
		r = num % 10;
		sum = sum + r;
	}
	printf("sum of digit is : %d\n",sum);
}

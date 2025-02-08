#include<stdio.h>
void main()
{
	int num=123,r;
	for( ; num ; num=num/10)
	{
		r = num % 10;
		printf("%d\n",r);
	}
}

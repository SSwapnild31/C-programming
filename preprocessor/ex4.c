#include<stdio.h>

int sum(int a, int b)
{
	return a+b;
}

#define SUM(a,b) a+b

void main()
{
	int i=2,j=3,r;
	r=sum(i,j);
	printf("r=%d\n",r);
	
	r=SUM(i,j);
	printf("r=%d\n",r);
}

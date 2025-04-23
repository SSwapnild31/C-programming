#include<stdio.h>

int mul(int num1,int num2)
{
	return num1*num2;
}

#define MUL(i,j)  (i)*(j)

void main()
{
	int a=2, b=3,r;
	
	r=mul(a+2,b+1);
	printf("r=%d\n",r);
	
	r=MUL(a+2,b+1);
	printf("r=%d\n",r);
}

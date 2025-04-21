#include<stdio.h>

typedef int *p;

void main()
{
	p q,*r;		//here, q is pointer variable and r is double variable
	
	int i=10;
	q=&i;

	printf("%d\n",*q);
	
}

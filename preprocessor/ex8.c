#include<stdio.h>

#define tp(i,j) i##j

void main()
{
	int a1=100;
	
	printf("%d\n",tp(a,1));
}

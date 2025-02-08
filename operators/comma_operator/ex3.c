#include<stdio.h>
void main()
{
	int i,j;

	i=5,2;
	j=3,4;
	printf("i=%d j=%d\n",i,j);
	
	i=(5,2);
	j=(3,4);
	printf("i=%d j=%d\n0",i,j);
	
}

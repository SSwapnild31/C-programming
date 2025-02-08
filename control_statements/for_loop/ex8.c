#include<stdio.h>
void main()
{
	int i=-1;
	for(++i;i;i=2)
	printf("i=%d\n",i);
	printf("out of the loop\n");
}

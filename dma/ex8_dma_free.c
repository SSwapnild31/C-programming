#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p;
	
	p=malloc(10);
	
	free(p);
	
	p=malloc(20);
}

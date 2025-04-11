#include<stdio.h>
#include<stdlib.h>
#include<mcheck.h>

void main()
{
	mtrace();
	int *p;
	
	p=malloc(10);
	free(p);
	
	p=malloc(20);
	free(p);
}

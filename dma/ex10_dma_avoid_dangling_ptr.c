#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p;
	p=malloc(10);
	
	printf("before : %p\n",p);
	
	free(p);
	
	p=0;	//to avoid dangling pointer make pointer null(0)
	
	printf("after : %p\n",p);
}

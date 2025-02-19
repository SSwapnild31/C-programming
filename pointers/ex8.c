#include<stdio.h>
void main()
{
	int i=10;
	int *p;
	
	*p=&i;				//	o/p can't predictable of *p
	printf("i=%d *p=%d\n",i,*p);
}

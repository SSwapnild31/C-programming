#include<stdio.h>
void main()
{
	int i=10,j=20;
	int *p;
	
	p=&i;
	printf("i=%d *p=%d\n",i,*p);
	
	*p=100;
	printf("i=%d *p=%d\n",i,*p);

	p=&j;
	printf("j=%d *p=%d\n",j,*p);

	*p=200;
	printf("j=%d *p=%d\n",j,*p);
}

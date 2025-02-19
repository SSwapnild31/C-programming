#include<stdio.h>
void main()
{
	int i=258;
	int*p;
	char *c;
	
	p=&i;
	c=(char *)&i;
	
	printf("*c=%d *p=%d\n",*c,*p);
	
	*c='a';
	printf("*c=%d *p=%d\n",*c,*p);
}

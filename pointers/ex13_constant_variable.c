#include<stdio.h>
void main()
{
	const int i=10,j=20;
	int *p;
	//int const *q;
	
	p=&i;				//pointer neglets const 
	printf("i=%d *p=%p\n",i,p);

	//*p=100;
	//i=100;				//Error
	printf("i=%d *p=%d\n",i,*p);
	
	/*
	q=&j;
	*q=200;
	printf("j=%d *q=%d\n",j,*q);
	*/
}

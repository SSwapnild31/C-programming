#include<stdio.h>
void main()
{
	int i=10,j=20;
	int *p=&i;
	
	//p=j;				//gives error : Segmentation fault (core dumped)
	
	p=&j;				//pointer p is directing to j variable
	

	//*p=j;				//indirectly changing the value of i using *p(dereference)
	
	printf("i=%d j=%d *p=%d\n",i,j,*p);
}

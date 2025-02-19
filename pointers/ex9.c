#include<stdio.h>
void main()
{
	int i=10,j;
	int *p=&i;

	//j=p;					//here we can't predict value of j
	
	j=*p;					//here on j, we are indirectly storing value of i 
	
	printf("i=%d *p=%d j=%d\n",i,*p,j);
}

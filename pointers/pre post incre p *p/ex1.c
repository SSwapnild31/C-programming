#include<stdio.h>
void main()
{
	int i=10,j;
	int *p=&i;
	printf("&i=%p p=%p\n",&i,p);
	printf("i=%d\n",i);
	j=++*p;
	printf("p=%p i=%d j=%d\n",p,i,j);
}

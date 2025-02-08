#include<stdio.h>
void main()
{
	int c=0;
	printf("hello...\n");
	l:
	printf("hai...\n");
	c++;
	if(c<3)
	goto l;
	printf("bye...\n");
}

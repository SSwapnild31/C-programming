#include<stdio.h>
void main()
{
	printf("hello...\n");
	goto l;	
	printf("hai...\n");
	l:
	printf("one...\n");
	goto l1;
	printf("two...\n");
	l1:
	printf("bye...\n");


}

#include<stdio.h>

void main()
{
	int a=10;
	int *p;
	int **pp;
	p=&a;
	pp=&p;
	printf("Address of a : %x\n",p);
	printf("Address of p : %x\n",pp);
	printf("Value stored at p : %d\n",*p);
	printf("Value stored at pp : %d\n",**pp);
	getch();
}

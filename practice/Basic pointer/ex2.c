#include<stdio.h>

void m(int *p)
{
	int i = 0;
	for(i = 0;i < 5; i++)
		printf("%d ", p[i]);
}

void main()
{
	/*int *p=(int *)200;
	int *q=(int *)160;
	printf("%d",p-q);*/
	
	/*char *s = "hello";
	char *n = "cjn";
	s++;
	printf("%c %c\n",*s,n[1]);*/
	int a[5]={6,5,3};
	m(a);
	
}

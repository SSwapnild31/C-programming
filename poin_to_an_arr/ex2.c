#include<stdio.h>

void main()
{
	int a[5]={10,20,30,40,50};
	int (*p)[5];
	p=&a;
	
	for(int i=0;i<5;i++)
		printf("%d ",(*p)[i]);
	printf("\n");
}

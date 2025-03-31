#include<stdio.h>

void main()
{
	int a[5]={40,10,30,50,20};
	
	int *p[5]={a+1,a+4,a+2,a,a+3};
	
	int i;
	for(i=0;i<5;i++)
		printf("%d ",*p[i]);
	printf("\n");
}

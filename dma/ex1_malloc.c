#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	
	printf("enter an int : ");
	scanf("%d",p);
		
	printf("%d\n",*p);
}

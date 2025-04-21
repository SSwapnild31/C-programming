#include<stdio.h>

typedef int a[5];

void main()
{
	a b,k[2];
	
	int i;
	
	printf("Enter 5 ints \n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	printf("\n");
}

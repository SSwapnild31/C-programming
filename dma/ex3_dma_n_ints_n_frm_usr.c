#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *p,n,i;
	printf("enter n : ");
	scanf("%d",&n);
	
	p=malloc(sizeof(int)*n);
	
	printf("Enter %d int's :\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}

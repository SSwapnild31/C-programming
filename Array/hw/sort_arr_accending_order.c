#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int *p;
	
	p=calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				int t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	
	printf("After sort : ");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}

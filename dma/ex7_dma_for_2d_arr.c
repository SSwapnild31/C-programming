#include<stdio.h>
#include<stdlib.h>

void main()
{
	int r,c;
	printf("Enter rows and columns :\n");
	scanf("%d%d",&r,&c);
	
	int **p,i,j;

	p=malloc(sizeof(int*)*r);

	for(i=0;i<r;i++)
	p[i]=malloc(sizeof(int)*c);
	
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	
	printf("---------------------------\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}

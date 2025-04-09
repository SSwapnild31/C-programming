#include<stdio.h>
#include<stdlib.h>

void main()
{
	int r,c,i;
	printf("Enter row and column :\n");
	scanf("%d%d",&r,&c);
	
	char **p;
	
	p=calloc(c,sizeof(char*));
	
	for(i=0;i<r;i++)
		p[i]=calloc(c,sizeof(char));
	
	printf("Enter %d string of %d bytes\n",r,c-1);
	for(i=0;i<r;i++)
		scanf("%s",p[i]);
	printf("----------------------\n");
	for(i=0;i<r;i++)
		printf("%s ",p[i]);
	printf("\n");
}

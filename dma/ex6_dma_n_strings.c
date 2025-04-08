#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	char **p;

	p=malloc(sizeof(char *)*n);
	
	for(i=0;i<n;i++)
	p[i]=malloc(sizeof(char)*5);
	
	printf("Enter %d strings :\n",n);
	for(i=0;i<n;i++)
		scanf("%s",p[i]);
	
	printf("-----------------\n");

	for(i=0;i<n;i++)
		printf("%s ",p[i]);
	printf("\n");
}

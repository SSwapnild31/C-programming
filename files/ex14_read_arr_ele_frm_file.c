#include<stdio.h>

void main()
{
	FILE *fp=fopen("data","r");
	
	int arr[5],i;
	
	for(i=0;i<5;i++)
		fscanf(fp,"%d",&arr[i]);
	
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

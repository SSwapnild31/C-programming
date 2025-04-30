#include<stdio.h>

void main()
{
	FILE *fp=fopen("data","r");
	
	int i;
	
	fscanf(fp,"%d",&i);
	
	printf("i=%d\n",i);
}

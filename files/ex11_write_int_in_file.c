#include<stdio.h>

void main()
{
	FILE *fp=fopen("data","w");
	
	int i=123456;
	
	fprintf(fp,"%d",i);
}

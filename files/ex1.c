#include<stdio.h>

void main()
{
	FILE *fp;
	fp=fopen("data","r");
	
	if(fp==0)
		printf("file not opened..\n");
	else
		printf("file opened..\n");
}

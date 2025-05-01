#include<stdio.h>

void main()
{
	FILE *fp=fopen("data","r");
	
	fseek(fp,0,SEEK_END);
	
	printf("%ld\n",ftell(fp));
}

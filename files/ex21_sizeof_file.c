#include<stdio.h>

void main()
{
	FILE *fp=fopen("data","a");
	
	printf("%ld\n",ftell(fp));
}

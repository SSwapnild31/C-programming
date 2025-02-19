#include<stdio.h>
void main()
{
	int i=10;
	char *cp;
	
	cp=(char *)&i;
	
	if(*cp==10)
		printf("Little endian..\n");
	else
		printf("Big endian..\n");
}

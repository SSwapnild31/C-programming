#include<stdio.h>

union u
{
	int i;
	char ch;
};

void main()
{
	union u v;
	
	v.i=10;
	
	if(v.ch==10)
		printf("LITTLE ENDIAN\n");
	else
		printf("BIG ENDIAN\n");
}

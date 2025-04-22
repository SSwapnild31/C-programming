#include<stdio.h>

#define int char
#define char float
#define float int

void main()
{
	int i;
	char ch;
	float f;
	
	printf("%ld %ld %ld\n",sizeof(i),sizeof(ch),sizeof(f));
}

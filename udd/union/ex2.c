#include<stdio.h>

union u
{
	int i;
	char ch;
	float f;
};

void main()
{
	union u v;
	
	v.i=260;
	printf("%d\n",v.ch);
	
	v.ch='a';
	printf("%d\n",v.i);
}

#include<stdio.h>
struct one
{
	int i;
	char ch;
	float f;	
};

void main()
{
	struct one v;
	
	v.i=10;
	v.ch='a';
	v.f=34.5;
	
	printf("%d %c %f\n",v.i,v.ch,v.f);
}

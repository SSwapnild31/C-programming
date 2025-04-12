#include<stdio.h>

struct one
{
	int i;
	char ch;
	float f;
};

void main()
{
	//struct one v={10,'a',20.5};
	
	struct one v={.f=12.5};
	
	printf("%i %c %f\n",v.i,v.ch,v.f);
}

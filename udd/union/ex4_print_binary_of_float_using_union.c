#include<stdio.h>

union u 
{
	float f;
	int i;
};

void main()
{
	union u v;
	
	v.f=23.5;
	int pos;
	
	for(pos=31;pos>=0;pos--)
		printf("%d",v.i>>pos&1);
	printf("\n");
}

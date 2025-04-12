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
	
	printf("Enter int, char & float :\n");
	scanf("%d %c %f",&v.i,&v.ch,&v.f);
	
	
	printf("%d %c %f\n",v.i,v.ch,v.f);
}

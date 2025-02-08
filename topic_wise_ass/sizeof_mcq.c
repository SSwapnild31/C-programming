#include<stdio.h>
void main()
{
	char a;
	int b;
	short int c;
	float d;
	double e;
	
	printf("%ld\n",2+sizeof(d));
	printf("%ld\n",sizeof(a+b));
	printf("%ld\n",sizeof(a+c));
	printf("%ld\n",sizeof(a+3.0));
	
	printf("--%ld\n",sizeof(a,c,e));
	printf("%ld\n",sizeof(e,a)+4);
	printf("%ld\n",sizeof(0x11));
	printf("--%ld\n",sizeof(011));
	
	printf("%ld\n",sizeof(1+1.0));
	printf("%ld\n",sizeof('a'));
	printf("%ld\n",sizeof(a));
	printf("%ld\n",sizeof(55.5));
}
